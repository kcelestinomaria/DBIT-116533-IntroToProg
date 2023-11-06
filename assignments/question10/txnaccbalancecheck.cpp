#include <iostream>
#include <sstream>
#include <map>

using namespace std;

const int dailyTxnLimit = 10000;

struct CustomerAccountData {
    double accountBalance;
    string userConsent;
    double withdrawalAmount;
};

int main() {
    // Simulated account information
    CustomerAccountData customerAccountInstance;

    // Prompt the user for account data
    cout << "Enter your account balance: KES";
    cin >> customerAccountInstance.accountBalance;
    cout << "Enter 'WITHDRAW' or 'DEPOSIT': ";
    cin >> customerAccountInstance.userConsent;
    cout << "Enter the withdrawal/deposit amount: KES";
    cin >> customerAccountInstance.withdrawalAmount;

    // Create a map data structure to store test customer data
    map<string, CustomerAccountData> testCustomerDataMap;
    
    // Define test customer data
    testCustomerDataMap["WITHDRAW"] = {1000.0, "WITHDRAW", 500.0};
    testCustomerDataMap["DEPOSIT"] = {1000.0, "DEPOSIT", 200.0};

    // Check if the user input corresponds to a test customer data
    auto it = testCustomerDataMap.find(customerAccountInstance.userConsent);
    if (it != testCustomerDataMap.end()) {
        // Process the customer data
        if (customerAccountInstance.accountBalance < 0 && 
            !(customerAccountInstance.withdrawalAmount >= customerAccountInstance.accountBalance)) {
            cout << "Your account is in unpaid debt, withdrawal unsuccessful: KES" << customerAccountInstance.accountBalance << endl;
        } else if (customerAccountInstance.withdrawalAmount > customerAccountInstance.accountBalance) {
            cout << "Your withdrawal amount is more than your account balance, withdrawal unsuccessful." << endl;
        } else if (customerAccountInstance.withdrawalAmount > dailyTxnLimit) {
            cout << "Withdrawal amount exceeds the daily limit of: KES" << dailyTxnLimit << " , withdrawal unsuccessful." << endl;
        } else {
            // Process the withdrawal or deposit
            if (customerAccountInstance.userConsent == "WITHDRAW") {
                // Withdrawal
                if (customerAccountInstance.accountBalance >= 0) {
                    customerAccountInstance.accountBalance -= customerAccountInstance.withdrawalAmount;
                } else {
                    customerAccountInstance.accountBalance += customerAccountInstance.withdrawalAmount;
                }
                cout << "Transaction successful. Remaining balance: KES" << customerAccountInstance.accountBalance << endl;
            } else if (customerAccountInstance.userConsent == "DEPOSIT") {
                // Deposit
                customerAccountInstance.accountBalance += customerAccountInstance.withdrawalAmount;
                cout << "Deposit successful. New balance: KES" << customerAccountInstance.accountBalance << endl;
            }
        }
    } else {
        cout << "Invalid user consent. Use 'WITHDRAW' or 'DEPOSIT'." << endl;
    }

    return 0;
}
