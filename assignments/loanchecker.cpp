/* **ABOUT THIS PROGRAM**
* In this C++ Program,
* We want to check if a customer is qualified for a loan
* given a set of conditions.
* The conditions are:
* 1) Age must be above 22 years
* 2) Bank balance more than 50,000
* 3) CRB status should be good
* 4) Must have been a customer for more than 6 
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <chrono>
#include <ctime>
#include <map>


using namespace std;

/*
* Below is a helper function that we us to read and parse user input dates 
* which are provided in the following date format: DAY/MONTH/YEAR .
* We invoke it later in our program to parse the user's date of birth, and 
* the date he opened an account.
*/
tm parseDate(const string& dateString) {
     /*
     * We define the date in "DAY/MONTH/YEAR" format
        i.e string dateString = "12/10/2000"; 
     */
    tm date = {};
    istringstream ss(dateString);
    ss >> date.tm_mday;
    ss.ignore();
    ss >> date.tm_mon;
    ss.ignore();
    ss >> date.tm_year;
    date.tm_year -= 1900; // Adjust the year (years since 1900)
    date.tm_mon--; // Adjust the month (0-based)

    // return the newly formatted date
    return date;
}

int main() {

    // First we open the file containing our user's input - customerinput.txt
    ifstream customerInputFile("customerinput.txt");
    if (!customerInputFile.is_open()) {
        // Error handling in the event that the file fails to open
        cerr << "Cannot open this file" << endl;
        return -1; // We exit the program if we can't open the file
    }

    /* QUESTIONS FOR OUR CUSTOMER
    1. What is your birth date? (Expect a date input: DAY/MONTH/YEAR -> '%d/%m/%Y')
    2. How much have you deposited in your account? (Expect an integer > 0 && < 2 ^ 64 - 1)
    3. Do you have an unpaid loan? (Expect a YES or NO)
    4. When did you open your account with us? (Expect a date input: DAY/MONTH/YEAR)
    */

    // We declare variables to hold our customer data in memory
    string birthDate; // when were you born?
    int bankBalance; // what is your current bank balance?
    string loanPaid; // do you have an unpaid loan? - INPUT(YES or NO)
    string accountOpenDate;// When did you open your account ?

    // We create a map data structure to store our test customer data
    map<string, int> fileLines;
    
    // We may have various customer input data so as to effectively test our program
    // for all different customer/user input, ensuring we cover edge cases
    // C++ maps hold data in key-value pairs
    fileLines["Correct Test Customer Input Data"] = 1;
    fileLines["Wrong test Customer Input Data - Option 1"] = 2;
    fileLines["Wrong test Customer Input Data - Option 2"] = 3;

    // To go through our file, we need to loop through it
    // We first define a variable to hold a counter as we loop through the file
    int lineNumber = 0;

    // We then implement a 'while' statement to start the looping process through the file
    while( lineNumber < fileLines["Correct Test Customer Input Data"] && getline(customerInputFile, birthDate)) {

        // the counter variable iterates from 0 as it loops through every line of the file up to the last line
        lineNumber++;

    }

    // We can change the fileLines Map's 'Key' to call any test customer input data we 
    // may want to run our program through, for my case I have used the one that evaluates
    // our program to TRUE, which is in the first line of the file
    if (lineNumber == fileLines["Correct Test Customer Input Data"]) {

        istringstream lineStream(birthDate);

        lineStream >> birthDate >> bankBalance >> loanPaid >> accountOpenDate;

        // Get the current date
        auto now = chrono::system_clock::now();
        time_t current_time = chrono::system_clock::to_time_t(now);
        tm today = *localtime(&current_time);

       
        // Parse the user's date of birth
        tm birthDateFormatted = parseDate(birthDate);

        tm accountOpenDateFormatted = parseDate(accountOpenDate);

        // Calculate the difference between the user's date of birth and today's date to get user's age
        chrono::system_clock::duration age_diff = chrono::system_clock::from_time_t(mktime(&today)) -
                                               chrono::system_clock::from_time_t(mktime(&birthDateFormatted));
        int age = chrono::duration_cast<chrono::hours>(age_diff).count() / 24;

        // During calculation, the age is in days
        // So as to present the age in years, to our user, we divide it by 365 below:
        int age_in_years = age / 365;

        chrono::system_clock::duration account_age_diff = chrono::system_clock::from_time_t(mktime(&today)) -
                                               chrono::system_clock::from_time_t(mktime(&accountOpenDateFormatted));               
        int accountActive = chrono::duration_cast<chrono::hours>(account_age_diff).count() / 24;

        int accountsActive_in_months = accountActive / 12;


        // Let's output to see their values first
        cout << "You are " << age_in_years << " years old" << endl;
        cout << "Your Bank Balance is: " << bankBalance << endl;
        cout << "Have you paid your loans? - " << loanPaid << endl;
        cout << "Your account has been active for " << accountsActive_in_months << " months" << endl;  

        cout << "\n";

        // Let's check the user input from our file against the 'loan access' conditions
       if (age > 365 * 22 && bankBalance > 50000 && loanPaid == "yes" && accountActive > 12 * 6) {
            cout << "Congratulations! You are qualified for a loan with us!" << endl;
       } else if (age > 365 * 22 && bankBalance < 50000 && loanPaid == "yes" && accountActive > 12 * 6) {
            cout << "Your bank balance is too low! Your loan application is ineligible" << endl;
       } else if (age < 365 * 22 && bankBalance < 50000 && loanPaid == "yes" && accountActive > 12 * 6) {
            cout << "You are too young to access our lending program. Please try again when you pass 18 years" << endl;
       } else if (age > 365 * 22 && bankBalance > 50000 && loanPaid == "no" && accountActive > 12 * 6) {
            cout << "Your CRB Status is not in 'GOOD' status, you are unqualified for a loan. " << endl;
       } else if (age > 365 * 22 && bankBalance > 50000 && loanPaid == "yes" && accountActive < 12 * 6) {
            cout << "You are ineligible for a loan, please use your account with us for more than 6 months to qualify." << endl;
       } else {
            cout << "Non of your credentials meet our loan criteria, sadly you are therefore ineligible" << endl;
       }

    };

     // Once finished, we close the file
    customerInputFile.close();
   
    return 0;
}