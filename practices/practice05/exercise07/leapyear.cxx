#include <iostream>

using namespace std;

bool isLeapYear(int year);

int main() {

    int year;

    cout << "Enter a year: " << endl;
    cin >> year;

    // We check if the year is a leap year
    if (isLeapYear(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is NOT a leap year." << endl;
    }

    return 0;
}

bool isLeapYear(int year) {
    // A leap year is divisible by 4
    // Exception is: years divisible by 100 are NOT leap years unless they are also divisible by 400
    return ((year % 4 == 0) && ((year % 100 == 0 ) || (year % 400 == 0)));
}