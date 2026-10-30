#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int empID;
    string empName;
    string department;
    double basicSalary;

    void accept() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore(); // to clear newline
        cout << "Enter Employee Name: ";
        getline(cin, empName);
        cout << "Enter Department: ";
        getline(cin, department);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    double calculateAnnualSalary() {
        return basicSalary * 12;
    }

    void display() {
        cout << "\n--- Employee Information ---" << endl;
        cout << "ID: " << empID << endl;
        cout << "Name: " << empName << endl;
        cout << "Department: " << department << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Annual Salary: " << calculateAnnualSalary() << endl;
    }
};

int main() {
    Employee e1;
    e1.accept();
    e1.display();
    return 0;
}