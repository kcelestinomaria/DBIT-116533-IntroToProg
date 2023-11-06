#include <iostream>
#include <sstream>
#include <string>
#include <chrono>
#include <ctime>

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
    string birthDate;
    double bankBalance;
    string loanPaid;
    string accountOpenDate;

    // Prompt the user for input
    cout << "Please enter your date of birth (DAY/MONTH/YEAR): ";
    cin >> birthDate;
    cout << "Please enter your bank balance: $";
    cin >> bankBalance;
    cout << "Do you have unpaid loans (YES/NO): ";
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

    // Display user information
    cout << "You are " << age_in_years << " years old" << endl;
    cout << "Your Bank Balance is: $" << bankBalance << endl;
    cout << "Have you paid your loans? - " << loanPaid << endl;
    cout << "Your account has been active for " << accountsActive_in_months << " months" << endl;

    cout << "\n";

    // Check loan qualification criteria
    if (age > 22 * 365 && bankBalance > 50000 && loanPaid == "YES" && accountsActive_in_months > 6) {
        cout << "Congratulations! You are qualified for a loan with us!" << endl;
    } else {
        cout << "Sorry, you do not meet the loan qualification criteria." << endl;
    }

    return 0;
}
