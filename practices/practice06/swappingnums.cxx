#include <iostream>

using namespace std;

int main() {

    double number1, number2;

    number1 = 7.3;

    double* ptr;
    ptr = &number1;

    cout << ptr << endl;

    number2 = *ptr;

    cout << number1 << endl;

    cout << *ptr << endl;

    return 0;

}