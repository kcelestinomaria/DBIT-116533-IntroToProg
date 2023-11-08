#include <iostream>
#include <sstream>
#include <string>
#include <chrono>
#include <ctime>
#include <cmath>

using namespace std;

// Function to parse a date in the format "DAY/MONTH/YEAR" and convert it to a tm struct
tm parseDate(const string& dateString) {
    tm date = {};
    istringstream ss(dateString);
    ss >> date.tm_mday;
    ss.ignore();
    ss >> date.tm_mon;
    ss.ignore();
    ss >> date.tm_year;
    date.tm_year -= 1900;
    date.tm_mon--;

    return date;
}

int main() {


    // We declare variables to hold our customer data in memory
    string birthDate;
    double bankBalance;
    string loanPaid;
    string accountOpenDate;

    /* QUESTIONS FOR OUR CUSTOMER
    1. What is your birth date? (Expect a date input: DAY/MONTH/YEAR -> '%d/%m/%Y')
    2. How much have you deposited in your account? (Expect an integer > 0 && < 2 ^ 64 - 1)
    3. Do you have an unpaid loan? (Expect a YES or NO)
    4. When did you open your account with us? (Expect a date input: DAY/MONTH/YEAR)
    */

    // Prompt the user for input
    cout << "Please enter your date of birth (DAY/MONTH/YEAR): ";
    cin >> birthDate;
    cout << "Please enter your bank balance: KES ";
    cin >> bankBalance;
    cout << "Do you have unpaid loans (Enter 'YES' or 'NO'): ";
    cin >> loanPaid;
    cout << "Please enter the date you opened your account (DAY/MONTH/YEAR): ";
    cin >> accountOpenDate;

    // Get the current date and time
    auto now = chrono::system_clock::now();
    time_t current_time = chrono::system_clock::to_time_t(now);
    tm today = *localtime(&current_time);

    // Parse user input dates
    tm birthDateFormatted = parseDate(birthDate);
    tm accountOpenDateFormatted = parseDate(accountOpenDate);

    // Calculate the user's age
    chrono::system_clock::duration age_diff = chrono::system_clock::from_time_t(mktime(&today)) -
        chrono::system_clock::from_time_t(mktime(&birthDateFormatted));
    int age = chrono::duration_cast<chrono::hours>(age_diff).count() / 24;
    int age_in_years = age / 365;

    // Calculate the duration of account activity in months
    chrono::system_clock::duration account_age_diff = chrono::system_clock::from_time_t(mktime(&today)) -
        chrono::system_clock::from_time_t(mktime(&accountOpenDateFormatted));
    int accountActive = chrono::duration_cast<chrono::hours>(account_age_diff).count() / 24;
    int accountsActive_in_months = accountActive / 30;


    // To prevent the program from displaying and calculating the bankBalance in this format '1.29377e+06' i.e 'intE'
    // we cast the 'double' variable of bankBalance into an integer format so its easily readable
    int int_bankBalance = static_cast<int>(bankBalance);

    // Display user's account information to the console
    cout << "~~ HERE IS YOUR ACCOUNT INFORMATION ~~" << endl;
    cout << ".......................................\n";
    cout << "You are " << age_in_years << " years old" << endl;
    cout << "Your Bank Balance is: KES " << int_bankBalance << endl;

    // 2 ^ 64 is the highest number that a computer can calculate to
    // To prevent buffer overflows & other number calculation errors, we make sure the bank balance doesn't reach that number
    if (bankBalance > (pow(2, 64 - 1))) {
        cout << "Invalid input! The bank balance is beyond the set limit" << endl;
        return -1; // Exit the program, with an error code
    }
    cout << "Do you have unpaid loans? - " << loanPaid << endl;
    cout << "Your account has been active for " << accountsActive_in_months << " months" << endl;

    cout << "\n";

    // Check loan qualification criteria
    if (age > 22 * 365 && bankBalance > 50000 && loanPaid == "NO" && accountsActive_in_months > 6) {
        cout << "Congratulations! You are qualified for a loan with us!" << endl;
    } else if (age > 365 * 22 && bankBalance < 50000 && loanPaid == "NO" && accountActive > 12 * 6) {
            cout << "Your bank balance is too low! Your loan application is ineligible" << endl;
    } else if (age < 365 * 22 && bankBalance < 50000 && loanPaid == "NO" && accountActive > 12 * 6) {
            cout << "You are too young to access our lending program. Please try again when you pass 18 years" << endl;
    } else if (age > 365 * 22 && bankBalance > 50000 && loanPaid == "YES" && accountActive > 12 * 6) {
            cout << "Your CRB Status is not in 'GOOD' status, you are unqualified for a loan. " << endl;
    } else if (age > 365 * 22 && bankBalance > 50000 && loanPaid == "NO" && accountActive < 12 * 6) {
            cout << "You are ineligible for a loan, please use your account with us for more than 6 months to qualify." << endl;
    } else {
        cout << "Sorry, you do not meet the loan qualification criteria." << endl;
    }

    return 0;
}
