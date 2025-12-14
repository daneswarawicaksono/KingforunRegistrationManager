#include "ParticipantManager.h"

using namespace System::IO;
using namespace System::Net::Mail;
using namespace System::Windows::Forms;

ParticipantManager::ParticipantManager() {
    filePath = "registrations.csv";
}

List<Participant^>^ ParticipantManager::GetAllParticipants() {
    List<Participant^>^ list = gcnew List<Participant^>();
    if (!File::Exists(filePath)) return list;

    array<String^>^ lines = File::ReadAllLines(filePath);

    // Start loop from 1 to skip CSV header
    for (int i = 1; i < lines->Length; i++) {
        if (String::IsNullOrWhiteSpace(lines[i])) continue;

        array<String^>^ fields = ParseCSVLine(lines[i]);
        if (fields->Length >= 6) {
            Participant^ p = gcnew Participant();
            p->Nama = UnescapeCSV(fields[0]);
            p->Email = UnescapeCSV(fields[1]);
            p->NomorTelepon = UnescapeCSV(fields[2]);
            p->Gender = UnescapeCSV(fields[3]);
            try { p->TanggalLahir = DateTime::Parse(UnescapeCSV(fields[4])); }
            catch (...) { p->TanggalLahir = DateTime::Now; }
            p->Alergi = UnescapeCSV(fields[5]);

            list->Add(p);
        }
    }
    return list;
}

void ParticipantManager::AddParticipant(Participant^ p) {
    if (!File::Exists(filePath)) {
        File::WriteAllText(filePath, "Nama,Email,Nomor,Jenis Kelamin,Tanggal Lahir,Alergi\n");
    }
    File::AppendAllText(filePath, p->ToCSVString() + "\n");
}

void ParticipantManager::UpdateParticipant(String^ originalEmail, Participant^ newP) {
    List<Participant^>^ allData = GetAllParticipants();
    List<String^>^ linesToWrite = gcnew List<String^>();

    linesToWrite->Add("Nama,Email,Nomor,Jenis Kelamin,Tanggal Lahir,Alergi");

    for each (Participant ^ p in allData) {
        if (p->Email->Trim()->ToLower() == originalEmail->Trim()->ToLower()) {
            linesToWrite->Add(newP->ToCSVString());
        }
        else {
            linesToWrite->Add(p->ToCSVString());
        }
    }
    File::WriteAllLines(filePath, linesToWrite->ToArray());
}

void ParticipantManager::DeleteParticipants(List<String^>^ emailsToDelete) {
    List<Participant^>^ allData = GetAllParticipants();
    List<String^>^ linesToWrite = gcnew List<String^>();

    linesToWrite->Add("Nama,Email,Nomor,Jenis Kelamin,Tanggal Lahir,Alergi");

    for each (Participant ^ p in allData) {
        bool shouldDelete = false;
        for each (String ^ delEmail in emailsToDelete) {
            if (p->Email->Trim()->ToLower() == delEmail->Trim()->ToLower()) {
                shouldDelete = true;
                break;
            }
        }
        if (!shouldDelete) {
            linesToWrite->Add(p->ToCSVString());
        }
    }
    File::WriteAllLines(filePath, linesToWrite->ToArray());
}

List<Participant^>^ ParticipantManager::SearchParticipants(String^ keyword) {
    List<Participant^>^ allData = GetAllParticipants();
    List<Participant^>^ results = gcnew List<Participant^>();

    String^ k = keyword->ToLower();
    for each (Participant ^ p in allData) {
        if (p->Nama->ToLower()->Contains(k) ||
            p->Email->ToLower()->Contains(k) ||
            p->Alergi->ToLower()->Contains(k)) {
            results->Add(p);
        }
    }
    return results;
}

void ParticipantManager::ImportCSV(String^ sourcePath) {
    array<String^>^ lines = File::ReadAllLines(sourcePath);
    if (!File::Exists(filePath)) {
        File::WriteAllText(filePath, "Nama,Email,Nomor,Jenis Kelamin,Tanggal Lahir,Alergi\n");
    }

    for (int i = 1; i < lines->Length; i++) {
        if (!String::IsNullOrWhiteSpace(lines[i])) {
            File::AppendAllText(filePath, lines[i] + "\n");
        }
    }
}

void ParticipantManager::ExportCSV(String^ destPath) {
    if (File::Exists(filePath)) {
        File::Copy(filePath, destPath, true);
    }
}

bool ParticipantManager::IsValidEmail(String^ email) {
    try {
        MailAddress^ addr = gcnew MailAddress(email);
        return addr->Address == email;
    }
    catch (...) { return false; }
}

bool ParticipantManager::IsDuplicate(String^ email) {
    List<Participant^>^ list = GetAllParticipants();
    for each (Participant ^ p in list) {
        if (p->Email->Trim()->ToLower() == email->Trim()->ToLower()) return true;
    }
    return false;
}

String^ ParticipantManager::UnescapeCSV(String^ input) {
    if (String::IsNullOrEmpty(input)) return "";
    String^ result = input->Trim();
    if (result->StartsWith("\"") && result->EndsWith("\"")) {
        result = result->Substring(1, result->Length - 2)->Replace("\"\"", "\"");
    }
    return result;
}

array<String^>^ ParticipantManager::ParseCSVLine(String^ line) {
    List<String^>^ fields = gcnew List<String^>();
    bool inQuotes = false;
    String^ currentField = "";

    for (int i = 0; i < line->Length; i++) {
        wchar_t c = line[i];
        if (c == '"') {
            if (i + 1 < line->Length && line[i + 1] == '"') {
                currentField += "\""; i++;
            }
            else inQuotes = !inQuotes;
        }
        else if (c == ',' && !inQuotes) {
            fields->Add(currentField); currentField = "";
        }
        else currentField += c;
    }
    fields->Add(currentField);
    return fields->ToArray();
}