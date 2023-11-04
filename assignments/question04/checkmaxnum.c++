#include <iostream>

using namespace std;

int main() {

    double num_1, num_2;

    cout << "This program allows you to input two numbers" << "\n" <<
            ", and then checks which is the maximum number" << endl;
    cout << "\n";
    cout << "Enter your first number: " << endl;
    cin >> num_1;

    cout << "Enter your second number: " << endl;
    cin >> num_2;

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