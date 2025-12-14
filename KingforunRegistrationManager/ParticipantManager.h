#pragma once
#include "Participant.h"

using namespace System;
using namespace System::Collections::Generic;

public ref class ParticipantManager {
private:
    String^ filePath;

public:
    ParticipantManager();

    List<Participant^>^ GetAllParticipants();
    void AddParticipant(Participant^ p);
    void UpdateParticipant(String^ originalEmail, Participant^ newP);
    void DeleteParticipants(List<String^>^ emailsToDelete);

    List<Participant^>^ SearchParticipants(String^ keyword);
    void ImportCSV(String^ sourcePath);
    void ExportCSV(String^ destPath);

    bool IsValidEmail(String^ email);
    bool IsDuplicate(String^ email);

private:
    String^ UnescapeCSV(String^ input);
    array<String^>^ ParseCSVLine(String^ line);
};