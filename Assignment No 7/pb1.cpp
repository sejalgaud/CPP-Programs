#include <iostream>
#include <string>
using namespace std;

// Base Class
class Employee {
public:
    int empID;
    string empName;
    string department;

    void acceptEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, empName);
        cout << "Enter Department: ";
        getline(cin, department);
    }

    void displayEmployee() {
        cout << "\nEmployee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Department: " << department << endl;
    }
};

// Derived Class 1 - Teaching Staff
class TeachingStaff : public Employee {
public:
    string subject;
    string qualification;

    void acceptTeaching() {
        acceptEmployee();
        cout << "Enter Subject: ";
        getline(cin, subject);
        cout << "Enter Qualification: ";
        getline(cin, qualification);
    }

    void displayTeaching() {
        cout << "\n--- Teaching Staff Details ---";
        displayEmployee();
        cout << "Subject: " << subject << endl;
        cout << "Qualification: " << qualification << endl;
    }
};

// Derived Class 2 - Non-Teaching Staff
class NonTeachingStaff : public Employee {
public:
    string designation;
    int workingHours;

    void acceptNonTeaching() {
        acceptEmployee();
        cout << "Enter Designation: ";
        getline(cin, designation);
        cout << "Enter Working Hours: ";
        cin >> workingHours;
    }

    void displayNonTeaching() {
        cout << "\n--- Non-Teaching Staff Details ---";
        displayEmployee();
        cout << "Designation: " << designation << endl;
        cout << "Working Hours: " << workingHours << endl;
    }
};

int main() {
    int choice;
    cout << "1. Teaching Staff\n2. Non-Teaching Staff\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        TeachingStaff t;
        t.acceptTeaching();
        t.displayTeaching();
    } else if (choice == 2) {
        NonTeachingStaff nt;
        nt.acceptNonTeaching();
        nt.displayNonTeaching();
    } else {
        cout << "Invalid Choice!";
    }
    return 0;
}