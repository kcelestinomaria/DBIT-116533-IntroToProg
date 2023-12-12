#include <iostream>

/*
* This program calculates the factorial of any give number
*/

using namespace std;

int calculateFactorial(int number);

int main() {

    int number;

    cout << "Enter a number to find its factorial: ";
    cin >> number;

    int factorialResult = calculateFactorial(number);

    cout << "Factorial of: " << number << " is: " << factorialResult << endl;

    return 0;
}

int calculateFactorial(int number) {

    // Base case: factorial of 0 or 1 is 1
    if (number == 0 || number == 1) {
        return 1;
    }

    // Recursive case: n! = n * (n - 1)!
    return number * calculateFactorial(number - 1);
}