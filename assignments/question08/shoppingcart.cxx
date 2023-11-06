#include <iostream>

int main() {
    double purchaseAmount;
    double totalCost = 0.0;

    // Prompt the user for the purchase amount
    std::cout << "Enter the purchase amount: KES ";
    std::cin >> purchaseAmount;

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

    // Display the total cost after applying the discount
    std::cout << "Total cost after applying the discount: KES " << totalCost << std::endl;

    return 0;
}
