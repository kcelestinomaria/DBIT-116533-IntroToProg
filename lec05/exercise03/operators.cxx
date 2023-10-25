/*
* Logical, Arithmetic & Comparison Operators C++ Demonstration
*/

#include <iostream>
#include <string>

using namespace std;

/*
void returnBoolean(int booleanNum) {
    if (booleanNum == 0) {
        return false;
    } else
        return true;
    return booleanNum;
}
*/

int main() {

    // This is how "Arithmetic Operators" work
    int num1 = 10, num2 = 30; // Two 'integer' variables declared

    bool var1 = true, var2 = false; // Declare and initialize 'Boolean' variables

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
    cout << "Increment num1 by 1: " << ++num1 << endl;

    // 7 - Decrement operator, i.e '--'
    cout << "Decrement num1 by 1: " << --num1 << endl;

    /*
    * Comparison operators 
    */
    // 1 - Greater than i.e '>'
    cout << num1 << " is greater than " << num2 << " returns " <<  (num1 > num2) << endl;

    // 2 - Less than i.e '<'
    cout << num1 << " is lesser than " << num2 << " returns " << (num1 < num2) << endl;

    // 3 - Equal to i.e '=='
    cout << num1 << " is equal to " << num2 << " returns " << (num1 == num2) << endl;

    // 4 - 'Not Equal' to i.e '!='
    cout << num1 << " is not equal to " << num2 << " returns " << (num1 != num2) << endl;

    cout << "\n\n";
    cout << "Note that 0 means \"Boolean False\" , 1 means \"Boolean True\"" << endl;
    cout << "\n\n";

    /*
    * Boolean operators
    */
    // 1 - AND i.e '&&'
    cout << var1 << " && " << var2 << " returns " << (var1 && var2) << endl;

    // 2 - OR i.e '||'
    cout << var1 << " || " << var2 << " returns " << (var1 || var2) << endl;

    // 3 - Boolean i.e '|'
    cout << var1 << " | " << var2 << " returns " << (var1 | var2) << endl;

    return 0;
}