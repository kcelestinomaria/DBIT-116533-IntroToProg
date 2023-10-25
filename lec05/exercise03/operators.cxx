/*
* Logical, Arithmetic & Comparison Operators C++ Demonstration
*/

#include <iostream>

using namespace std;

int main() {

    // This is how "Arithmetic Operators" work
    int num1 = 10, num2 = 30; // Two 'integer' variables declared

    // 1 - Addition Arithmetic Operator, i.e '+'
    cout << "Sum of two numbers(num1 & num2) is: " << num1 + num2 << endl;

    // 2 - Subtraction Arithmetic Operator, i.e '-'
    cout << "Difference of two numbers(num1 & num2) is: " << num1 - num2 << endl;

    // 3 - Multiplication operator, i.e '*'
    cout << "Multiplication of two numbers(num1 & num2) is: " << num1 * num2 << endl;
    
    // 4 - Division operator, i.e '/'
    cout << "Division of two numbers(num1 & num2) is: " << (float)(num1 / num2) << endl;

    // 5 - Modulus operator, i.e '%'
    cout << "Remainder when both numbers are divided by each other: " << num1 % num2 << endl;

    // 6 - Increment operator, i.e '++'
    cout << "Incrememnt num1 by 1: " << ++num1 << endl;

    // 7 - Decrement operator, i.e '--'
    cout << "Decrement num1 by 1: " << --num1 << endl;

    /*
    * Comparison operators 
    */
    return 0;
}