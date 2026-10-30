#include <iostream>
#include <string>
using namespace std;

class MobileRecharge {
public:
    string mobileNo;
    string userName;
    double balance = 0;

    void accept() {
        cout << "Enter User Name: ";
        getline(cin, userName);
        cout << "Enter Mobile No: ";
        getline(cin, mobileNo);
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void recharge(double amount) {
        balance += amount;
        cout << "Recharged Rs." << amount << " Successfully.\n";
    }

    void deduct(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Deducted Rs." << amount << " for usage.\n";
        } else {
            cout << "Insufficient Balance!\n";
        }
    }

    void display() {
        cout << "\n--- Account Details ---\n";
        cout << "Name: " << userName << endl;
        cout << "Mobile No: " << mobileNo << endl;
        cout << "Current Balance: Rs." << balance << endl;
    }
};

int main() {
    MobileRecharge m;
    m.accept();
    
    double amt;
    cout << "Enter Recharge Amount: ";
    cin >> amt;
    m.recharge(amt);

    cout << "Enter Usage Amount to Deduct: ";
    cin >> amt;
    m.deduct(amt);

    m.display();
    return 0;
}