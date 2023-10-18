#include <iostream>
#include <string>

using namespace std;

int main() {

    float numOne, numTwo;
    int operation;

    cout << "Enter the first number: " << endl;
    cin >> numOne;

    cout << "Enter the second number: " << endl;
    cin >> numTwo;

    cout << "Enter the operation you want for the two numbers" << endl;
    cout << "The operations can be one of the following: 0-add, 1-multiply, 2-subtract, or 3-divide" << endl;
    cin >> operation;

    switch (operation) {
        case 0:
            cout << numOne + numTwo << endl;
        break;
        case 1:
            cout << numOne * numTwo << endl;
        break;
        case 2:
            cout << numTwo - numOne << endl;
        break;
        case 3:
            cout << numTwo / numOne << endl;
    }

    return 0;
    
}