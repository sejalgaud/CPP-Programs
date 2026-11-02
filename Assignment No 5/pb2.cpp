#include <iostream>
using namespace std;

class Box {
public:
    double length, breadth, height;

    // 1. Default Constructor
    Box() {
        length = 1;
        breadth = 1;
        height = 1;
        cout << "Default Constructor Called" << endl;
    }

    // 2. Parameterized Constructor
    Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
        cout << "Parameterized Constructor Called" << endl;
    }

    // 3. Copy Constructor
    Box(const Box &b) {
        length = b.length;
        breadth = b.breadth;
        height = b.height;
        cout << "Copy Constructor Called" << endl;
    }

    double calculateVolume() {
        return length * breadth * height;
    }

    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth << ", Height: " << height;
        cout << " | Volume: " << calculateVolume() << endl;
    }

    // Destructor
    ~Box() {
        cout << "Destructor Called for Box with Volume: " << calculateVolume() << endl;
    }
};

int main() {
    cout << "--- Creating Box 1 (Default) ---" << endl;
    Box box1;
    box1.display();

    cout << "\n--- Creating Box 2 (Parameterized) ---" << endl;
    Box box2(5.0, 4.0, 3.0);
    box2.display();

    cout << "\n--- Creating Box 3 (Copy of Box 2) ---" << endl;
    Box box3 = box2; // copy constructor invoked
    box3.display();

    cout << "\n--- Exiting Program ---" << endl;
    return 0;
}