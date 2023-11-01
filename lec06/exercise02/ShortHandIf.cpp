#include <iostream>
#include <string>

using namespace std;

int main() {

    int age;
    cout << "Please Enter the age: ";
    cin >> age;

    /*
    ***REPLACE THE BELOW IF-ELSE STATEMENT WITH A TERNARY OPERATOR
     if (age >= 4) {
        cout << "Admitted! Proceed to Registration" << endl;
    } else {
        cout << "Declined! Minimum age not reached" << endl;
    }
    */

    // let's implement a ternary operator and assign the output to a variable
    string message = ( age >= 4)? "Admitted! Proceed to Registration" : "Declined! Minimum age not reached";

    cout << message << endl;

    return 0;
}