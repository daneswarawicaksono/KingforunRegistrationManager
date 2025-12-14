#pragma once

using namespace System;

public ref class Participant {
public:
    property String^ Nama;
    property String^ Email;
    property String^ NomorTelepon;
    property String^ Gender;
    property DateTime TanggalLahir;
    property String^ Alergi;

    Participant() {}

    Participant(String^ nama, String^ email, String^ noTelp, String^ gender, DateTime tglLahir, String^ alergi) {
        Nama = nama;
        Email = email;
        NomorTelepon = noTelp;
        Gender = gender;
        TanggalLahir = tglLahir;
        Alergi = alergi;
    }

    String^ ToCSVString() {
        return String::Format("{0},{1},{2},{3},{4},{5}",
            EscapeCSV(Nama), EscapeCSV(Email), EscapeCSV(NomorTelepon),
            Gender, TanggalLahir.ToString("dd/MM/yyyy"), EscapeCSV(Alergi));
    }

private:
    String^ EscapeCSV(String^ input) {
        if (String::IsNullOrEmpty(input)) return "";
        if (input->Contains(",") || input->Contains("\"") || input->Contains("\n")) {
            return "\"" + input->Replace("\"", "\"\"") + "\"";
        }
        return input;
    }
};