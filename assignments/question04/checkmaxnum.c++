#include <iostream>

/* ~~ ABOUT THIS PROGRAM ~~
* This program allows us to get
* the maximum of any two numbers,
* by using a Switch...Case statement.
* It prompts a user for the two numbers
*/
using namespace std;

int main() {

    // Declare two variables to hold the numbers in memory location
    double num_1, num_2;

    // Let's output 'instruction' messages to the user
    cout << "This program allows you to input two numbers" << "\n" <<
            ", and then checks which is the maximum number" << endl;
    cout << "\n";
    cout << "Enter your first number: " << endl;
    cin >> num_1;

    cout << "Enter your second number: " << endl;
    cin >> num_2;

    // We cast the double types to integer types, so we can make accurate comparisons
    // for our maximum number checker!
    int int_num_1 = static_cast<int>(num_1);
    int int_num_2 = static_cast<int>(num_2);

    int max_number;

    // switch...case is only used for constant expressions and cases, as opposed to if-else statements
    // If we put non-constant expressions and cases, there will be semantic errors
    switch (int_num_1 - int_num_2) {
        case 0:
            cerr << "Both numbers are equal!" << endl;
            return -1; 
        case 1:
            max_number = static_cast<int>(num_2);
        case -1:
            max_number = static_cast<int>(num_1);
        default:
            if (num_1 > num_2) {
                max_number = static_cast<int>(num_1);
            } else {
                max_number = static_cast<int>(num_2);
            }
    }

    cout << "This is the maximum number: " << max_number << endl;

    return 0;
}