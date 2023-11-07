#include <iostream>

/* **ABOUT THIS PROGRAM**
* This program calculates the total cost of 
* a shopping cart after applying different discount percentages
* based on the purchase amount.
* We use if, else if, and else statements to determine which
* discount to apply
*/

using namespace std;


int main() {

    // Declare the 'purchase amount' variable
    double purchaseAmount;

    // Declare and initialize the total cost to 0(mutable as it changes during checkout)
    double totalCost = 0.0;

    // Prompt the user for the purchase amount
    cout << "Enter the purchase amount: KES ";
    cin >> purchaseAmount;

    // Calculate discounts based on purchase amount
    if (purchaseAmount < 50.0) {
        totalCost = purchaseAmount;
    } else if (purchaseAmount >= 50.0 && purchaseAmount < 100.0) {
        totalCost = purchaseAmount * 0.9; // 10% discount
    } else if (purchaseAmount >= 100.0 && purchaseAmount < 200.0) {
        totalCost = purchaseAmount * 0.8; // 20% discount
    } else {
        totalCost = purchaseAmount * 0.7; // 30% discount
    }

    // We finally display the total cost after applying the discount
    cout << "Total cost after applying the discount: KES " << totalCost << endl;

    return 0;
}
