#include <iostream>
#include <string>
using namespace std;

class ElectricityBill {
public:
    string name;
    int units;
    int totalBill;

    void accept() {
        cout << "Enter Consumer Name: ";
        getline(cin, name);
        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    void calculate() {
        if (units <= 100) {
            totalBill = units * 5;
        }
        else if (units <= 200) {
            totalBill = (100 * 5) + (units - 100) * 7;
        }
        else if (units <= 300) {
            totalBill = (100 * 5) + (100 * 7) + (units - 200) * 10;
        }
        else {
            totalBill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
        }
    }

    void display() {
        cout << "\n--- Electricity Bill ---" << endl;
        cout << "Consumer Name : " << name << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Payable Amount: Rs. " << totalBill << endl;
    }
};

int main() {
    ElectricityBill e;
    e.accept();
    e.calculate();
    e.display();
    return 0;
}