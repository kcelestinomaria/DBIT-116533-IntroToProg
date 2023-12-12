#include <iostream>

/*
* In this program, we manipulate an array using pointers
*
* Pointers can be used for array manipulation and traversal.
* They provide a mechanism for iterating through arrays and accessing elements directly.
*/

using namespace std;

int main() {

    // Define the array
    int array[5] = {1, 2, 3, 4, 5};

    // Set up the pointer, and let it access the array
    int *ptr = array;

    for (int iterator = 0; iterator < 5; ++iterator) {
        // Print the elements of the array
        cout << *(ptr + iterator) << " " << endl;
    }
}