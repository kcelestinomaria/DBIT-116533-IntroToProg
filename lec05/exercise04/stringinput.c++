/*
* Inputting long strings e.g paragraphs, full names etc.
*/
#include <iostream>

using namespace std;

int main() {

    string str1;

    cout << "Enter a long string: ";

    // Accept a multi-line string as input
    getline(cin, str1);

    cout << str1 << endl;

    return 0;
}