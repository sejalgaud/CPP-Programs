#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
public:
    int bookID;
    string title;
    bool isIssued = false;

    void accept() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, title);
    }

    void issueBook() {
        if (!isIssued) {
            isIssued = true;
            cout << "Book '" << title << "' Issued Successfully.\n";
        } else {
            cout << "Book is already issued!\n";
        }
    }

    void returnBook() {
        if (isIssued) {
            isIssued = false;
            cout << "Book '" << title << "' Returned Successfully.\n";
        } else {
            cout << "Book was not issued.\n";
        }
    }

    void display() {
        cout << "\n--- Book Details ---\n";
        cout << "ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Status: " << (isIssued ? "Issued" : "Available") << endl;
    }
};

int main() {
    LibraryBook b;
    b.accept();
    b.issueBook();
    b.display();
    b.returnBook();
    b.display();
    return 0;
}