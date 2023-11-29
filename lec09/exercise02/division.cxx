#include <iostream>

using namespace std;

int divideTwoNumbers(int, int); // -> Function prototype

int main() {

    cout<< divideTwoNumbers(5, 5) << endl;

    return 0;   
}

int divideTwoNumbers(int num_1, int num_2) {
    int quotient = num_1 / num_2;
    return quotient;
}