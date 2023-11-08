#include <iostream>

using namespace std;

int main() {

    cout << "A simple program to output 12, 14, 16, 18, 20, 22, 24, 26, 28 on the console" << endl;
    cout << "Using a For Loop\n";

    for (int counter = 12; counter <= 28; counter += 2 ) {
        cout << counter << endl;
    }
}