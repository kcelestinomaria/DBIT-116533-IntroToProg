#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {

    // Declare & Initialize
    // book types and their associated fine(late fee) rates in a map data structure
    map<char, pair<string, double>> bookTypes;
    bookTypes['R'] = make_pair("Regular", 0.1);
    bookTypes['C'] = make_pair("Children's", 0.05);
    bookTypes['N'] = make_pair("Reference", 0.15);

    int daysLate;
    char bookType;
    double fine = 0.0;

    // A Welcome message for our user
    cout << "*** Library Late Fee Calculator ***\n\n";

    // Let's prompt the user for the number of days late
    cout << "Enter the number of days the book is late: ";
    cin >> daysLate;

    // Let's prompt the user for the type of book
    cout << "Enter the type of book (R for Regular, C for Children's, N for Reference): ";
    cin >> bookType;

    // Next, we check if the entered book type is valid
    if (bookTypes.find(bookType) != bookTypes.end()) {
        // Calculate the late fee based on the book type
        fine = bookTypes[bookType].second * daysLate;

        // Display the late fee and details
        cout << "\nLate Fee Calculation:\n";
        cout << "..................................\n";
        cout << "Book Type: " << bookTypes[bookType].first << " Book\n";
        cout << "Days Late: " << daysLate << " day(s)\n";
        cout << "You will pay a Late Fee of: KES" << fine << "\n";
    } else {
        cout << "Invalid book type entered.\n";
    }

    return 0;
}