#include <iostream>

using namespace std;

int main() {

    // declare and initialize the integer array, and a sum variable
    int nums[5], sum = 0;

    // initialize the counter variable, to loop through the array's indices
    int counter = 0;

    cout << "Please enter 5 numbers: " << endl;

    // using a while loop, go through the the array
    while(counter < 5) {

        // receive from the user each of the array's values to be held in memory
        cin >> nums[counter];

        // increment the counter, to go through the array from the first index onwards
        counter++;
    }


    cout << "\n";
    cout << "Here is the array's output: " << endl;
    for (int iterator = 0; iterator < 5; ++iterator) {
        // sum = sum + nums[iterator]
        sum += nums[iterator];
    }
    cout << "\n";
    cout << "The sum is: " << sum << endl;
    cout << "The byte size of the array, in total is: " << sizeof(nums) << endl;
    cout << "The number of elements in our array is: " << sizeof(nums) / sizeof(int) << endl;

    return 0;
}