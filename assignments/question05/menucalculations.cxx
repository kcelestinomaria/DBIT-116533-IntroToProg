#include <iostream>
#include <cmath>

using namespace std;

//const PI = 3.14;

int main() {

    int userChoice;

    while (true) {

        cout << "WELCOME TO THIS MENU...." << endl;
        cout << "Select any one choice to continue." << endl;
        cout << "1. Calculate the area of a circle." << endl;
        cout << "2. Calculate the area of a rectangle." << endl;
        cout << "3. Calculate the area of a triangle." << endl;
        cout << "4. Quit" << endl;
        cin >> userChoice;

        switch (userChoice) {
            case 1:
            // If Option 1 -> We calculate the area of a circle
            double radius;

            cout << "Enter the radius of the circle you want to calculate its area for:";
            cin >> radius;

            if (radius <= 0) {
                cerr << "Invalid input! Radius cannot be 0 or a negative number.";
                return -1; // Exit the program
            } else {
                double areaCircle = M_PI * radius * radius; // Writing 'radius**2' yields semantic issues
                cout << "The area of a circle with the radius " << radius << " is: " << areaCircle << endl;
                cout << "\n\n";
            }
            

            break;

            case 2: 
            // If Option 2 is selected, then we calculate a rectangle's area
            double length, width;

            cout << "Enter the length of the rectangle you want to calculate an area for: ";
            cin >> length;
            cout << "Now, enter its width:";
            cin >> width;

            if (length < 0 && width < 0) {
                cerr << "Invalid input! Both values cannot be less than zero. Please select another option.";
                return -1;
            } else {
                double areaRectangle = length * width;
                cout << "The area of a rectangle with the length = " << length << " and width = " << width << " is: " << areaRectangle << endl;
                cout << "\n\n";
            }

            break;

            case 3:
                // Option 3 - Calculate the area of a triangle
                double base, height;

                cout << "Enter the base of the triangle you want an area for: ";
                cin >> base;
                cout << "Next, enter its height: ";
                cin >> height;

                if (height < 0 && base < 0) {
                    cerr << "Invalid input! Both values cannot be less than zero. Please select another option.";
                    return -1;
                } else {
                    double areaTriangle = 1/2 * base * height;
                    cout << "The area of a triangle with the height = " << height << " and base = " << base << " is: " << areaTriangle << endl;
                    cout << "\n\n";
                }

                break;

            case 4:
                // Option 4 - Quit the program
                cout << "You selected QUIT! Bye bye!";
                
                break;

            default:
                cout << "Invalid choice. Please select a number between 1 and 4.";
                break;
        }

        return 0;
    }

    return 0;
}