#include <iostream>

using namespace std;

int main() {

    string food;
    char resp;

    cout << "Please enter a food you like: ";
    cin >> food;
    cout << "Do you wish to continue (Y/N)? ";
    cin >> resp;

    while (resp == 'N' || resp == 'Y') {
        cout << "Please enter a food you like: ";
        cin >> food;
        cout << "Do you wish to continue (Y/N)? ";
        cin >> resp;

        /*
        // let's make sure user doesn't enter any letter other than Y, or N 
        if (resp != 'N' || resp != 'Y') {
            cout << "Invalid Response Character!" << endl;
        return -1; // Exit the program if character response is not N, or Y
        };
        */
    }

    return 0;
}