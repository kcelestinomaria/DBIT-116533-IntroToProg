/*
* Implicit(Automatic) Conversion VS Explicit(Operator) Conversion
*/

#include <iostream>

using namespace std;

int main() {

    // We declare and initialize a variable of the data type - double
    double num1 = 15.5; 

    // We then declare an variable of the 'integer' data type
    int num2;

    cout << "Implicit Type Casting" << endl;
    
    cout << "Value of num1 before implicit type casting: " << num1 << endl;

    // let's perform implicit type casting i.e automatic conversion
    num2 = num1;
    cout << "Value of num1 after implicit type casting: " << num1 << endl;
    cout << "Value of num2 after implicit type casting: " << num2 << endl;

    cout << "\n\nExplicit Type Casting" << endl;

    cout << "num1 before explicit conversion: " << num1 << endl;

    // Explicit conversion(operator) function
    num2 = static_cast<int>(num1);

    cout << "num1 after explicit conversion: " << num1 << endl;
    cout << "num2 after explicit conversion: " << num2 << endl;

    return 0;
}
