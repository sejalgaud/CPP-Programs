#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int empID;
    string empName;
    double basicSalary;
    double HRA;
    double DA;
    double grossSalary;

    // Constructor to initialize values
    Employee(int id, string name, double basic) {
        empID = id;
        empName = name;
        basicSalary = basic;
        HRA = 0;
        DA = 0;
        grossSalary = 0;
        cout << "Constructor Called for Employee: " << empName << endl;
    }

    void calculateGrossSalary() {
        HRA = basicSalary * 0.20; // 20% of basic
        DA = basicSalary * 0.80;  // 80% of basic
        grossSalary = basicSalary + HRA + DA;
    }

    void display() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "ID: " << empID << endl;
        cout << "Name: " << empName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA (20%): " << HRA << endl;
        cout << "DA (80%): " << DA << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }

    // Destructor
    ~Employee() {
        cout << "\nDestructor Called: Object for " << empName << " is destroyed." << endl;
    }
};

int main() {
    int id;
    string name;
    double basic;

    cout << "Enter Employee ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, name);
    cout << "Enter Basic Salary: ";
    cin >> basic;

    Employee e1(id, name, basic);
    e1.calculateGrossSalary();
    e1.display();

    return 0; // destructor will be called here
}