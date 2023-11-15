#include <iostream>
#include <string>

using namespace std;

int main() {

    string userName_0 = "Brian127";
    string password_0 = "1234Barasa";
    string userName_1, password_1;
    while (true) {
        cout << "Hi! Enter your username: " << endl;
        cin >> userName_1;
        cout << "Then, enter your password: " << endl;
        cin >> password_1;

        
        if (userName_1 == userName_0 && password_1 == password_0) {
            cout << "Login Successful! Welcome To My Simple App" << endl;
            cout << "Select an action to perform below: " << endl;

            cout << "1. Go To About Us Page" << endl;
            cout << "2. Go To Services Page" << endl;
            cout << "3. Go To Full Pro"
        } else {

        }
    
    return 0;
}