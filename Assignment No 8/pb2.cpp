#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;

    // Friend functions for operator overloading
    friend istream& operator>>(istream &in, Student &s);
    friend ostream& operator<<(ostream &out, Student &s);
};

// Overload >> (Extraction operator)
istream& operator>>(istream &in, Student &s) {
    cout << "Enter Roll No: ";
    in >> s.rollNo;
    in.ignore();
    cout << "Enter Name: ";
    getline(in, s.name);
    cout << "Enter Marks: ";
    in >> s.marks;
    return in;
}

// Overload << (Insertion operator)
ostream& operator<<(ostream &out, Student &s) {
    out << "\n--- Student Details ---\n";
    out << "Roll No: " << s.rollNo << endl;
    out << "Name: " << s.name << endl;
    out << "Marks: " << s.marks << endl;
    return out;
}

int main() {
    Student s1;
    cin >> s1;  // calls overloaded >>
    cout << s1; // calls overloaded <<
    return 0;
}