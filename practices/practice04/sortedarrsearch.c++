#include <iostream>

using namespace std;

int main() {

    // Let's create a sample rotated array
    int rotatedArray[] = {13, 18, 25, 2, 8, 10};

    int sizeofArray = sizeof(rotatedArray) / sizeof(rotatedArray[0]);

    int target = 8;

    int index = searchRotatedArray();

    return 0;
}

// This function searches for an element in a rotated sorted array
int searchRotatedArray(int arr[], int size, int target) {

    // Let's initialize high and low pointers
    int low = 0;
    int high = size - 1;

    // Using a while loop, let's perform binary search
    while (low <= high) {
        
        // Next, we calculate the middle index
        int mid = low + (high - low) / 2;


        // We check if the middle target is the target
        if (arr[mid] == target) {
            return mid; // return the index if found
        }

        // Let's check if the left half is sorted
        if (arr[])
    }
}