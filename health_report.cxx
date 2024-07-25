#include <iostream>
#include <string>

using namespace std;

struct Patient {
    string name;
    int age;
    string diagnosis;
};

void recordPatientInfo(Patient& patient) {
    cout << "Enter patient name: ";
    getline(cin, patient.name);

    cout << "Enter patient age: ";
    cin >> patient.age;
    cin.ignore(); // Clear the newline character from the input buffer

    cout << "Enter diagnosis: ";
    getline(cin, patient.diagnosis);
}

void displayPatientInfo(const Patient& patient) {
    cout << "\nPatient Information:\n";
    cout << "Name: " << patient.name << endl;
    cout << "Age: " << patient.age << endl;
    cout << "Diagnosis: " << patient.diagnosis << endl;
}

int main() {
    Patient patientRecord;

    cout << "Welcome to the Healthcare Record System\n";
    cout << "--------------------------------------\n";

    recordPatientInfo(patientRecord);
    displayPatientInfo(patientRecord);

    return 0;
}
