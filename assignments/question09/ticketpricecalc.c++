#include <iostream>
#include <map>

/* **ABOUT THIS PROGRAM**
* This program calculates movie ticket prices,
* based on the age of a customer and the type of movie(3D, or Regular)
* We use if, if-else, and else statements to determine the ticket price
*/

using namespace std;

int main() {

    // We declare the variables, for assignment later when asking for user input
    // and also when creating a more complex data structure
    int age;
    char movieType;

    // declare and initialize the ticket price from 0(it is mutable)
    double ticketPrice = 0.0;

    // Create a nested map to store ticket prices based on age and movie type
    // The key value is a character that easy to reference to about the price type
    map<char, map<int, double>> priceMap;
    
    // Define ticket prices for different age groups and movie types
    priceMap['R'][0] = 4.0;  // Child price for regular
    priceMap['R'][12] = 8.0; // Adult price for regular
    priceMap['R'][65] = 5.0; // Senior price for regular
    priceMap['3'][0] = 6.0;  // Child price for 3D
    priceMap['3'][12] = 12.0; // Adult price for 3D
    priceMap['3'][65] = 9.0; // Senior price for 3D

    // Prompt the user for the age of the customer
    cout << "Enter the age of the customer: ";
    cin >> age;

    // Prompt the user for the type of movie (R for regular, 3 for 3D)
    cout << "Enter the type of movie (R for regular, 3 for 3D): ";
    cin >> movieType;

    // Determine the ticket price based on age and movie type
    if (movieType == 'R') {
        if (age < 12) {
            ticketPrice = 4.0; // Child price for regular
        } else if (age < 65) {
            ticketPrice = 8.0; // Adult price for regular
        } else {
            ticketPrice = 5.0; // Senior price for regular
        }
    } else if (movieType == '3') {
        if (age < 12) {
            ticketPrice = 6.0; // Child price for 3D
        } else if (age < 65) {
            ticketPrice = 12.0; // Adult price for 3D
        } else {
            ticketPrice = 9.0; // Senior price for 3D
        }
    } else {
        // Invalid movie type
        cout << "Invalid movie type. Please enter 'R' for regular or '3' for 3D." << endl;
        return 1; // Exit with an error code
    }

    // We finally display the calculated ticket price
    cout << "Ticket Price: KES " << ticketPrice << endl;

    return 0;
}
