#include <iostream>
using namespace std;

class Fraction {
public:
    int num, den; // numerator, denominator

    void accept() {
        cout << "Enter numerator and denominator: ";
        cin >> num >> den;
    }

    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    void simplify(int &n, int &d) {
        int g = gcd(n, d);
        n = n / g;
        d = d / g;
    }

    void add(Fraction f1, Fraction f2) {
        int n = f1.num * f2.den + f2.num * f1.den;
        int d = f1.den * f2.den;
        simplify(n, d);
        cout << "Addition = " << n << "/" << d << endl;
    }

    void subtract(Fraction f1, Fraction f2) {
        int n = f1.num * f2.den - f2.num * f1.den;
        int d = f1.den * f2.den;
        simplify(n, d);
        cout << "Subtraction = " << n << "/" << d << endl;
    }
};

int main() {
    Fraction f1, f2;
    cout << "For Fraction 1:\n";
    f1.accept();
    cout << "For Fraction 2:\n";
    f2.accept();

    Fraction result;
    result.add(f1, f2);
    result.subtract(f1, f2);
    return 0;
}