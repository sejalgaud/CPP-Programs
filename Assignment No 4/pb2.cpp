#include <iostream>
#include <string>
using namespace std;

class Patient {
public:
    int patientID;
    string name;
    int age;
    int daysAdmitted;
    double chargePerDay;

    void registerPatient() {
        cout << "Enter Patient ID: ";
        cin >> patientID;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Days Admitted: ";
        cin >> daysAdmitted;
        cout << "Enter Charge Per Day: ";
        cin >> chargePerDay;
    }

    double calculateCharges() {
        return daysAdmitted * chargePerDay;
    }

    void display() {
        cout << "\n--- Patient Information ---\n";
        cout << "ID: " << patientID << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Days: " << daysAdmitted << endl;
        cout << "Total Consultation Charges: Rs. " << calculateCharges() << endl;
    }
};

int main() {
    Patient p;
    p.registerPatient();
    p.display();
    return 0;
}