#include <iostream>

using namespace std;

int main() {

    int sum = 0;

    for (int start = 20; start <= 25; start++) {
        sum += start;
    }
    cout << "\n The sum of numbers between 20 and 25 is: " << sum << endl;
}