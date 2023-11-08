#include <iostream>

using namespace std;

int main() {

    string food;
    char resp;

    do {
        cout << "Please enter a food you like: ";
        cin >> food;
        cout << "Do you wish to continue (Y/N)? ";
        cin >> resp;
    } while (resp != 'N');

    return 0;
}