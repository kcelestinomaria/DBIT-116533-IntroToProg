#include <iostream>
#include <string>

using namespace std;

int main() {

    string userName_0 = "Brian127";
    string password_0 = "1234Barasa";

    // Create while loop to display menu after user selects options
    while (true) {
        
        string userName_1, password_1;
        cout << "Hi! Enter your username: " << endl;
        cin >> userName_1;
        cout << "Then, enter your password: " << endl;
        cin >> password_1;
        
        if (userName_1 == userName_0 && password_1 == password_0) {
            cout << "Login Successful! Welcome To My Simple App" << endl;
            cout << "Select an action to perform below: " << endl;
        } else {
            cout << "Not authorized" << endl;
            return 1; // Exit the program
        }

        int userChoice;

            cout << "\n\n";
            cout << "1. Go To About Us Page" << endl;
            cout << "2. Go To Services Page" << endl;
            cout << "3. Go To Full Profile Page" << endl;
            cout << "4. Logout" << endl;
            cin >> userChoice;

            switch (userChoice) {
                case 1:
                    cout << "You stay at Olive Courts, close to Strathmore" << endl;
                    cout << "I love the practical part of C++ programming" << endl;
                    cout << "\n\n";
                    cout << "please select another option below" << endl;
                    cout << "1. Go To About Us Page" << endl;
                    cout << "2. Go To Services Page" << endl;
                    cout << "3. Go To Full Profile Page" << endl;
                    cout << "4. Logout" << endl;
                    cin >> userChoice;
                    break;
                case 2:
                    cout << "I can help my friends with their C++ homework to earn money" << endl;
                    break;
                case 3:
                    cout << "Full Name: Brian Omondi" << endl;
                    cout << "Year of Birth: 2000" << endl;
                    cout << "Citizenship: Kenyan" << endl;
                    cout << "City: Mombasa" << endl;
                    cout << "University: Strathmore University" << endl;
                    cout << "Course: DBIT" << endl;
                    cout << "Unit Name: Introduction To Programming" << endl;
                    cout << "Your Hobbies: Swimming and Dancing" << endl;
                break;
                case 4:
                    cout << "Logout successfull" << endl;
                    string userName_1, password_1;
                    cout << "Hi! Enter your username: " << endl;
                    cin >> userName_1;
                    cout << "Then, enter your password: " << endl;
                    cin >> password_1;
                break;
            }  
    }
    return 0;
}