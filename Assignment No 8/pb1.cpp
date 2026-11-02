#include <iostream>
using namespace std;

class Matrix {
public:
    int rows, cols;
    int a[10][10];

    Matrix(int r=2, int c=2) {
        rows = r;
        cols = c;
    }

    void accept() {
        cout << "Enter " << rows*cols << " elements:\n";
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                cin >> a[i][j];
    }

    // Overload + for addition
    Matrix operator+(Matrix m) {
        Matrix res(rows, cols);
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                res.a[i][j] = a[i][j] + m.a[i][j];
        return res;
    }

    // Overload - for subtraction
    Matrix operator-(Matrix m) {
        Matrix res(rows, cols);
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                res.a[i][j] = a[i][j] - m.a[i][j];
        return res;
    }

    // Overload == for comparison
    bool operator==(Matrix m) {
        if(rows != m.rows || cols != m.cols) return false;
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                if(a[i][j] != m.a[i][j]) return false;
        return true;
    }

    void display() {
        for(int i=0;i<rows;i++) {
            for(int j=0;j<cols;j++)
                cout << a[i][j] << "\t";
            cout << endl;
        }
    }
};

int main() {
    int r,c;
    cout << "Enter rows and cols: ";
    cin >> r >> c;
    Matrix m1(r,c), m2(r,c);

    cout << "For Matrix 1:\n";
    m1.accept();
    cout << "For Matrix 2:\n";
    m2.accept();

    Matrix m3 = m1 + m2;
    Matrix m4 = m1 - m2;

    cout << "\nAddition Result:\n";
    m3.display();

    cout << "\nSubtraction Result:\n";
    m4.display();

    if(m1 == m2)
        cout << "\nBoth Matrices are Equal\n";
    else
        cout << "\nBoth Matrices are NOT Equal\n";

    return 0;
}