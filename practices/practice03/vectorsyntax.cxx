#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> myVector = {1, 2, 3, 4, 4, 5};
    // Vectors are dynamic arrays
    // vector<ElementType> vectorName = {value1, value2, ...}; -> syntax

    myVector.push_back(7); // Adds new element to the end of the vector
    
    myVector.pop_back(); // Removes the last element in the vector

    int sizeOfElements = myVector.size();

    int specificElement = myVector.at(2); // gets element at index no. 2

    int firstElement = myVector.front(); // returns first element of the vector
    int lastElement = myVector.back(); // returns last element of the vector

    if (myVector.empty()) {
        // if vector has no elements
    }

    myVector.clear(); // remove all the elements of the vector
}