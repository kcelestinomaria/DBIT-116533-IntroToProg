#include <iostream>

using namespace std;

/*
* Passing Parameters by Reference:
* Pointers allow passing parameters to functions by reference, 
* enabling the modification of the actual values passed to a function. 
* This can reduce the overhead of passing large data structures and, 
* eliminate the need to return multiple values from a function.
*/

void modifyValue(int *ptr); // function prototype

int main() {

    int sampleValue = 10;
    cout << "Before modification: " << sampleValue << endl;
    modifyValue(&sampleValue);
    cout << "After modifying: " << sampleValue << endl;

    return 0;
}

void modifyValue(int *ptr) {
    (*ptr)++; // Increment the value pointed to by ptr
}