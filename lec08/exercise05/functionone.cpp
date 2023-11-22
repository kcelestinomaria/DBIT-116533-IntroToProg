#include <iostream>

using namespace std;

int add(int, int); //function prototype

int main() {

    int var1 = 2, var2 = 3;
    cout << add(var1, var2) << endl; // function call

    return 0;
}

int add(int num_1, int num_2) { // function definition
    return num_1 + num_2;
}