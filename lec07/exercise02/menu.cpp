#include <iostream>
#include <map>

using namespace std;

int main() {

    // declare the variable to hold the food items by number in memory
    int foodIndex, numberOfFoodPlates;

    // declare a map, storing key-value pairs of the food items in memory, 
    // making the food item data easily retrievable
    map<string, int> foodItemsMap;

    // Let's add the prices for each food items to the map
    foodItemsMap["Fried Beef & Chips"] = 110;
    foodItemsMap["Ugali & Sukuma"] = 120;
    foodItemsMap["Chapati Dondo"] = 90;
    foodItemsMap["Rice Dengu"] = 100;

    while (true) {

        // Display a Greeting & Ask the user to pick a food item they want served for them
        cout << "\n";
        cout << "~~ Welcome To The Restaurant Menu! ~~\n...........";
        cout << "Pick any food item below to order and checkout!";
        cout << "\n1.Fried Beef & Chips(1 PLATE - KES 110) \n2.Ugali & Sukuma(1 PLATE - KES 120) \n3.Chapati Dondo(1 PLATE - KES 90) \n4.Rice Dengu(1 PLATE - KES 100) 5. " << endl;
        cout << "........................\n";

        cin >> foodIndex;
    
        // Loop through the inputted food item number and calculate the total cost
        // We also ask for the number of plates of that food item selected if the case evaluates to True.
        switch (foodIndex) {
            case 1:
                cout << "How many plates of this food item do you want served? " << endl;
                cin >> numberOfFoodPlates;
                cout << "You have selected Fried Beef & Chips at: " << (foodItemsMap["Fried Beef & Chips"] * numberOfFoodPlates) << "in total cost" << endl;
            break;
            case 2:
                cout << "How many plates of this food item do you want served? " << endl;
                cin >> numberOfFoodPlates;
                cout << "You have selected Ugali & Sukuma at a total cost of: " << (foodItemsMap["Ugali & Sukuma"] * numberOfFoodPlates) << endl;
            break;
            case 3:
                cout << "How many plates of this food item do you want served? " << endl;
                cin >> numberOfFoodPlates;
                cout << "You have selected Chapati Dondo at a total cost of: " << (foodItemsMap["Chapati Dondo"] * numberOfFoodPlates) << endl;
            break;
            case 4:
                cout << "How many plates of this food item do you want served? " << endl;
                cin >> numberOfFoodPlates;
                cout << "You have selected Rice Dengu at a total cost of: " << (foodItemsMap["Rice Dengu"] * numberOfFoodPlates) << endl;
            break;
            default:
                cout << "Invalid Entry";
            return -1; // Exit the program
    }
        
    }
  
    return 0;
}