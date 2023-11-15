#include <iostream>

using namespace std;



int main() {

    int year;

    cout << "Enter any random year: " << endl;
    cin >> year;

    if (year % 4 == 0) {
        cout << "This is a leap year: " << year << endl;
    } else if (year % 100 == 0) {
        cout << "This is NOT a leap year: " << year << endl;
    } else if (year % 400 == 0) {
        cout << "This is a leap year: " << year << endl;
    }

    return 0;
}