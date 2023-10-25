/*
* This C++ Program creates a simple user profile
* accepting your personal details:
1 - First Name
2 - Last Name
3 - Full Name
4 - Favorite Meal
5 - Favorite Movie
*/
#include <iostream>
#include <string>

using namespace std;

int main() {

    // Declaring the string variables for holding our input text data in memory
    string firstName, lastName, fullName, favoriteMeal, favoriteMovie;

    cout << "Enter your first name: " << endl;

    // getline() accepts strings as input
    getline(cin, firstName);

    cout << "Enter your last name: " << endl;
    getline(cin, lastName);

    cout << "Enter your full name: " << endl;
    getline(cin, fullName);

    cout << "Enter your favorite meal: " << endl;
    getline(cin, favoriteMeal);

    cout << "Enter your favorite movie: " << endl;
    getline(cin, favoriteMovie);

    // Let's put in some space
    cout << "\n\n";

    // Now we output and format our inputted text to the console
    cout << "first name: " << lastName << endl;
    cout << "full names: " << fullName << endl;
    cout << "favorite meal: " << favoriteMeal << endl;
    cout << "favorite movie: " << favoriteMovie << endl; 

    return 0;
}