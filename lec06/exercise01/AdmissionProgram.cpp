#include <iostream>

using namespace std;

int main() {

    // Declare the age 'integer' variable to hold the age's data in memory location
    int age;
    cout << "Please Enter the age: ";
    cin >> age;

    // Implementing an "If" statement checking against user input of the age datatype/variable
    if (age >= 4) {
        cout << "Admitted! Proceed to Registration" << endl;
    } else {
        cout << "Declined! Minimum age not reached" << endl;
    }

    return 0;
}