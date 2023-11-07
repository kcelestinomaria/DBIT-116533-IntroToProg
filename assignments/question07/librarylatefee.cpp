#include <iostream>
#include <string>
#include <map>
#include <vector>

/* ~~ ABOUT THIS PROGRAM ~~
* This program calculates the late fee for returning a book
* The fine varies based on the number of days late, 
* and the type of book(e.g., regular, children's, 
* or reference).
* We use if, else if, and 
* else statements to determine the fine amount
*/
using namespace std;

int main() {
    // Declare & Initialize book types and their associated fine (late fee) rates using if-else statements
    char bookType;
    double fine = 0.0;

    // A Welcome message for our user
    cout << "*** Library Late Fee Calculator ***\n\n";

    // Let's prompt the user for the number of days late
    cout << "Enter the number of days the book is late: ";
    int daysLate;
    cin >> daysLate;

    // Let's prompt the user for the type of book
    cout << "Enter the type of book (R for Regular, C for Children's, N for Reference): ";
    cin >> bookType;

    // Calculate the late fee based on the book type using if-else statements
    if (bookType == 'R') {
        fine = 0.1 * daysLate; // Calculate late fee for Regular book
    } else if (bookType == 'C') {
        fine = 0.05 * daysLate; // Calculate late fee for Children's book
    } else if (bookType == 'N') {
        fine = 0.15 * daysLate; // Calculate late fee for Reference book
    } else {
        cout << "Invalid book type entered.\n";
        return 1; // Exit with an error code
    }

    // Display the late fee and details
    cout << "\nLate Fee Calculation:\n";
    cout << "..................................\n";
    cout << "Book Type: ";

    // Output the book type based on user input
    if (bookType == 'R') {
        cout << "Regular Book";
    } else if (bookType == 'C') {
        cout << "Children's Book";
    } else if (bookType == 'N') {
        cout << "Reference Book";
    }

    cout << "\nDays Late: " << daysLate << " day(s)\n";
    cout << "You will pay a Late Fee of: KES " << fine << "\n";

    return 0;
}
