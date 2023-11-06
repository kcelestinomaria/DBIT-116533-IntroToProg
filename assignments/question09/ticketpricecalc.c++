#include <iostream>
#include <map>

int main() {
    int age;
    char movieType;
    double ticketPrice = 0.0;

    // Create a map to store ticket prices based on age and movie type
    std::map<char, std::map<int, double>> priceMap;
    
    // Define ticket prices for different age groups and movie types
    priceMap['R'][0] = 4.0;  // Child price for regular
    priceMap['R'][12] = 8.0; // Adult price for regular
    priceMap['R'][65] = 5.0; // Senior price for regular
    priceMap['3'][0] = 6.0;  // Child price for 3D
    priceMap['3'][12] = 12.0; // Adult price for 3D
    priceMap['3'][65] = 9.0; // Senior price for 3D

    // Prompt the user for the age of the customer
    std::cout << "Enter the age of the customer: ";
    std::cin >> age;

    // Prompt the user for the type of movie (R for regular, 3 for 3D)
    std::cout << "Enter the type of movie (R for regular, 3 for 3D): ";
    std::cin >> movieType;

    // Determine the ticket price based on age and movie type
    for (const auto& price : priceMap[movieType]) {
        if (age < price.first) {
            ticketPrice = price.second;
            break;
        }
    }

    // Display the calculated ticket price
    std::cout << "Ticket Price: KES " << ticketPrice << std::endl;

    return 0;
}
