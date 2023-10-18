#include <iostream>

using namespace std;

// Global variable declaration
int globalVar = 20;

// let's declare a constant
const int age = 25;

void myFunction(int num1, int num2) {
    // We are in the function block

    // let's declare & initialize a local variable for demonstration
    int localVar = 20;

    // let's demo the use of parameter variables
    int sum = num1 + num2;

    cout << "Local variable inside myFunction() is: " << localVar << endl;
    cout << "Sum is: " << sum << endl;
}
 

int main() {

    age = 29; // try assigning a new value to the constant variable, which ideally shouldn't work

    // invoke/call the function in the main method
    myFunction(4, 5);
    // cout << localVar; // This is not expected to work

    cout << globalVar << endl; // This is expected to work

    return 0;
}