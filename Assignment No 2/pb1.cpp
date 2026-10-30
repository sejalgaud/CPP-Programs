#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    int productID;
    string productName;
    int quantity;
    double unitPrice;

    void accept() {
        cout << "Enter Product ID: ";
        cin >> productID;
        cin.ignore();
        cout << "Enter Product Name: ";
        getline(cin, productName);
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Unit Price: ";
        cin >> unitPrice;
    }

    double calculateTotalCost() {
        return quantity * unitPrice;
    }

    void display() {
        cout << "\n--- Product Information ---" << endl;
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Unit Price: " << unitPrice << endl;
        cout << "Total Cost: " << calculateTotalCost() << endl;
    }
};

int main() {
    Product p1;
    p1.accept();
    p1.display();
    return 0;
}