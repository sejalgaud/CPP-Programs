#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\n--- Menu ---" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus" << endl;
    cout << "6. Exit" << endl;

    cout << "Enter your choice (1-6): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result = " << num1 + num2;
            break;
        case 2:
            cout << "Result = " << num1 - num2;
            break;
        case 3:
            cout << "Result = " << num1 * num2;
            break;
        case 4:
            if (num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        case 5:
            // modulus works on integers
            cout << "Result = " << (int)num1 % (int)num2;
            break;
        case 6:
            cout << "Exiting program...";
            break;
        default:
            cout << "Invalid choice!";
    }
    return 0;
}