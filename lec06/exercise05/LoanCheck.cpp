#include <iostream>
#include <string>

/*
* This program checks if a customer is qualified for a loan
* It asks customer for input and then checks the input 
* against a set of conditions to assert user's loan status
*/

using namespace std;

int main() {

    // declare variables to hold customer data in memory location
    string fullName;
    int age, loyaltyTime;
    double bankBalance;
    bool crbStatus;

    // prompt user & get input
    cout << "What is your full name sir?" << endl;
    getline(cin, fullName);

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Please enter your Bank Balance: ";
    cin >> bankBalance;

    cout << " What is your CRB Status ? \n \t Good(Enter 0), \t Default(Enter 1) " << endl;
    cin >> crbStatus;

    cout << "How long have you been with us(In Months?";
    cin >> loyaltyTime;

    // check input against conditions to assert loan status for customer
    if ( age > 22 && bankBalance > 50,000) {
        if (crbStatus == 0) {
            cout << "Your CRB Status is Good!" << endl;
            if (loyaltyTime > 6) {
                cout << "You are a loyal customer, thank you!" << endl;
            } else {
                cout << "This service is not available for your account" << endl;
            }
        } else {
            cout << "Your CRB Status is Default(BAD)" << endl;
        }
    } else {
        cout << "Hi! " << fullName << " Thanks, Your Loan Request is being processed!" << endl;
    }
}
