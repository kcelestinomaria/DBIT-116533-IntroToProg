#include <iostream>

using namespace std;

int main() {

    // Declare the age 'integer' variable to hold the age's data in memory location
    int age;
    cout << "Please Enter the age: ";
    cin >> age;

    // Implementing an "If" statement checking against user input of the age datatype/variable
    if (age >= 7) {
        cout << "Admit to Grade School" << endl;
    } else if (age >= 5 && age <= 6) {
        cout << "Admit to Kindergarten School" << endl;
    } else if (age >= 3 && age <= 4) {
        cout << "Admit to Pre-School" << endl;
    } else if ( age < 1 ) {
        cout << "Reject" << endl;
    }

    return 0;
}