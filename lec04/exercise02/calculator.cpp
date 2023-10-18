#include <iostream>
#include <string>

using namespace std;

int main() {

    // floating point numbers
    float numOne, numTwo;

    // hold the operator in memory as an integer
    /*
    * 0 - ADD
    * 1 - MULTIPLY
    * 2 - SUBTRACT
    * 3 - DIVIDE
    */
    int operation;

    cout << "Enter the first number: " << endl;
    // assign the first integer/floating point 'operand' from input
    cin >> numOne;

    cout << "Enter the second number: " << endl;
    // assign the second integer/floating point 'operand' from input
    cin >> numTwo;

    cout << "Enter the operation you want for the two numbers" << endl;
    cout << "The operations can be one of the following: 0-add, 1-multiply, 2-subtract, or 3-divide" << endl;
    // assign an operation for the two numbers, and hold it in memory
    cin >> operation;

    // iterate through each operation, to perform and output the final answer
    switch (operation) {

        // when ADD operation
        case 0:
            cout << numOne + numTwo << endl;
        break;

        // when MULTIPLY operation
        case 1:
            cout << numOne * numTwo << endl;
        break;

        // when SUBTRACT operation
        case 2:
            cout << numTwo - numOne << endl;
        break;

        // when DIVIDE operation
        case 3:
            cout << numTwo / numOne << endl;
    }

    return 0;
    
}