#include <iostream>

using namespace std;

/*
* Admission Number: 116533
* Course DBIT Sept-Dec 2023
* Strathmore University
*/
int main() {

    // Declare variables
    int firstNum, secondNum, thirdNum;

    cout << "Enter the first number: " << endl;
    cin >> firstNum;

    cout << "Enter the second number: " << endl;
    cin >> secondNum;

    cout << "Enter the third number: " << endl;
    cin >> thirdNum;

    int minimum_number;

    // Loop to check for minimum
    switch (firstNum - secondNum) {
        case 0:
            cout << "First Number & Second Number are equal" << endl;
            if (thirdNum - firstNum == 0) {
                cout << "Third Number & First Number are both equal" << endl;
            }
            minimum_number = 0;
        break;
        case 1:
            cout << "Second Number is Smaller Than First" << secondNum << endl;
            if (thirdNum < secondNum) {
                cout << "Smallest Number is: " << thirdNum << endl;
                minimum_number = thirdNum;
            } else {
                cout << "Smallest Number is: " << secondNum << endl;
                minimum_number = secondNum;
            }
        break;
        case -1:
            cout << "First Number is Smaller than Second Number: " << firstNum << endl;
            if (thirdNum < firstNum) {
                cout << "Smallest Number is Third Number: " << thirdNum << endl;
                minimum_number = thirdNum;
            } else {
                cout << "Smallest Number is First Number: " << firstNum << endl;
                minimum_number = firstNum;
            }
        break;
        default:
            if (firstNum < secondNum && firstNum < thirdNum) {
                cout << "Smallest Number is: " << firstNum << endl;
                minimum_number = firstNum;
            } else if (secondNum < firstNum && secondNum < thirdNum) {
                cout << "Smallest Number is: " << secondNum << endl;
                minimum_number = secondNum;
            } else {
                cout << "Smallest Number is: " << thirdNum << endl;
                minimum_number = thirdNum;
            }
        break;
    }

    cout << "The smallest number is: " << minimum_number << endl;

    return 0;
}