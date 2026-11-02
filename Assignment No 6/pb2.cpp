#include <iostream>
using namespace std;

class Employee {
public:
    // 1. Salary using Basic Salary only
    double calculateSalary(double basic) {
        return basic;
    }

    // 2. Salary using Basic + HRA
    double calculateSalary(double basic, double hra) {
        return basic + hra;
    }

    // 3. Salary using Basic + HRA + DA
    double calculateSalary(double basic, double hra, double da) {
        return basic + hra + da;
    }
};

int main() {
    Employee emp;
    double basic = 30000, hra = 6000, da = 15000;

    cout << "--- Employee Salary Calculation ---" << endl;
    cout << "Basic Salary: " << basic << endl;
    cout << "HRA: " << hra << endl;
    cout << "DA: " << da << endl << endl;

    cout << "Salary (Basic only) = " << emp.calculateSalary(basic) << endl;
    cout << "Salary (Basic + HRA) = " << emp.calculateSalary(basic, hra) << endl;
    cout << "Salary (Basic + HRA + DA) = " << emp.calculateSalary(basic, hra, da) << endl;

    return 0;
}