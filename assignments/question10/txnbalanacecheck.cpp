#include <iostream>
#include <fstream>
#include <map>

using namespace std;

// We hardcode the daily transaction limit
const int dailyTxnLimit = 10000;

struct customerAccountData {
    double accountBalance;
    string userConsent;
    double withdrawalAmount;
};

int main() {

    // let's call the struct into the main function so we can use its variables
    customerAccountData customerAccountInstance;

    // First we open the file containing our user's account input data - useraccount.txt
    ifstream userAccountFile("useraccount.txt");
    if (!userAccountFile.is_open()) {
        // Error handling in the event that the file fails to open
        cerr << "Cannot open this file" << endl;
        return -1; // We exit the program if we can't open the file
    }

    /*
     Each of the file's line has a set of inputs we need to verify(in order)
     1) A user's account balance(NOTE: a negative balance means the user's account is in CREDIT)
     2) The user's withdrawal amount
     3) 'WITHDRAW' text input -> facilitates a successful withdrawal of the funds
    */

    // We create a map data structure to store our test customer data
    map<string, int> fileLines;
    
    // We may have various customer input data so as to effectively test our program
    // for all different customer/user input, ensuring we cover edge cases
    // C++ maps hold data in key-value pairs
    fileLines["Test Customer Account A"] = 1;
    fileLines["Test Customer Account B"] = 2;
    fileLines["Test Customer Account C"] = 3;
    fileLines["Test Customer Account D"] = 4;
    fileLines["Test Customer Account E"] = 5;
    fileLines["Test Customer Account F"] = 6;




     // To go through our file, we need to loop through it
    // We first define a variable to hold a counter as we loop through the file
    int lineNumber = 0;

    // We then implement a 'while' statement to start the looping process through the file
    while( lineNumber < fileLines["Test Customer Account A"] 
    && getline(userAccountFile, customerAccountInstance.accountBalance)) {

        // the counter variable iterates from 0 as it loops through every line of the file up to the last line
        lineNumber++;

    }

    // We can change the fileLines Map's 'Key' to call any test customer input data we 
    // may want to run our program through, for my case I have used the one that evaluates
    // our program to TRUE, which is in the first line of the file
    if (lineNumber == fileLines["Test Customer Account A"]) {

        istringstream lineStream(customerAccountInstance.accountBalance);

        lineStream >> customerAccountInstance.accountBalance
         >> customerAccountInstance.userConsent >> customerAccountInstance.withdrawalAmount;

        
        cout << "Your account balance is: " << customerAccountInstance.accountBalance << endl;
        cout << "Your withdrawal consent is: " << customerAccountInstance.userConsent << endl;
        cout << "The amount you want to withdraw is: " << customerAccountInstance.withdrawalAmount << endl;

        if (customerAccountInstance.accountBalance < 0) {
            cout << "Your account is in unpaid debt, withdrawal unsuccessful: " << customerAccountInstance.accountBalance << endl;
        } else if (customerAccountInstance.accountBalance > 0 && 
        customerAccountInstance.userConsent == "YES" && 
        customerAccountInstance.withdrawalAmount < customerAccountInstance.accountBalance
        && customerAccountInstance.withdrawalAmount <= dailyTxnLimit) {
            cout << "Processing your withdrawal..." << endl;

            customerAccountInstance.accountBalance -= customerAccountInstance.withdrawalAmount;
            
            cout << "Successfully processed your withdrawal..." << endl;
            cout << "Your new account balance is: " << customerAccountInstance.accountBalance << endl;
        } else if ((customerAccountInstance.accountBalance > 0 || customerAccountInstance.accountBalance == 0)&&
        customerAccountInstance.userConsent == "YES" &&
        customerAccountInstance.withdrawalAmount > customerAccountInstance.accountBalance) {
            cout << "Your set withdrawal amount is more than your account balance." << endl;
            cout << "Transaction failed!" << endl;
        } else if (customerAccountInstance.accountBalance > 0 && customerAccountInstance.userConsent == "NO"
        && customerAccountInstance.withdrawalAmount < customerAccountInstance.accountBalance) {
            cout << "Transaction unsuccessful! You've not consented to it." << endl; 
        }

    };

    // let's finally close the file
    userAccountFile.close();
    
    return 0;
}
