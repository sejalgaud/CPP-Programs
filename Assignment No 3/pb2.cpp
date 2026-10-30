#include <iostream>
using namespace std;

class Time {
public:
    int hours, minutes, seconds;

    void accept() {
        cout << "Enter hours minutes seconds: ";
        cin >> hours >> minutes >> seconds;
    }

    Time add(Time t1, Time t2) {
        Time t3;
        t3.seconds = t1.seconds + t2.seconds;
        t3.minutes = t1.minutes + t2.minutes;
        t3.hours = t1.hours + t2.hours;

        if (t3.seconds >= 60) {
            t3.minutes += t3.seconds / 60;
            t3.seconds %= 60;
        }
        if (t3.minutes >= 60) {
            t3.hours += t3.minutes / 60;
            t3.minutes %= 60;
        }
        return t3;
    }

    void display() {
        cout << "Resultant Time (HH:MM:SS) = ";
        if (hours < 10) cout << "0";
        cout << hours << ":";
        if (minutes < 10) cout << "0";
        cout << minutes << ":";
        if (seconds < 10) cout << "0";
        cout << seconds << endl;
    }
};

int main() {
    Time t1, t2, t3;
    cout << "For Time 1:\n";
    t1.accept();
    cout << "For Time 2:\n";
    t2.accept();

    t3 = t3.add(t1, t2);
    t3.display();
    return 0;
}