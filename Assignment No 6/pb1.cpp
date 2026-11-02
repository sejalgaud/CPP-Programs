#include <iostream>
using namespace std;

class Calculator {
public:
    // 1. Add two integers
    int add(int a, int b) {
        return a + b;
    }

    // 2. Add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // 3. Add two floating-point numbers
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Addition of 2 integers (10, 20): " << calc.add(10, 20) << endl;
    cout << "Addition of 3 integers (10, 20, 30): " << calc.add(10, 20, 30) << endl;
    cout << "Addition of 2 floats (10.5, 20.8): " << calc.add(10.5f, 20.8f) << endl;

    return 0;
}