#include <iostream>

/*
* In this program, we demonstrate an example implementation of a nested if statement
*/
using namespace std;

int main() {

    int age;
    string interest, interest2;

    cout << "Please enter the child's age: ";
    cin >> age;

    // Let's created a nested if-else statement(has multiple if statements)
    if ( age >= 4 && age <=10 ) { // Beginning of primary if

        cout << "Please enter Interest: " << endl;
        cin >> interest;
        
        if (interest == "soccer") { // Beginning of nested if
            cout << "Admit and assign to Soccer Play Group" << endl;
        }
        if (interest == "art") {
            cout << "Admit and assign to Art group" << endl;
        } else {
            cout << "Admit to other group" << endl;
        } // End of nested if
    } else {
        cout << "Admission Unsuccessful. Age is invalid" << endl;
    // End of primary if
    }

    return 0;
}