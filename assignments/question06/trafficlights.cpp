#include <iostream>
#include <chrono>
#include <string>
#include <thread>

/* ~~ ABOUT THIS PROGRAM ~~
* This program simulates a traffic light
* It displays the color of the traffic light(red, yellow, and green)
* based on a timer.
* We use a switch...case statement to control the behaviour of the traffic light,
* as it outputs the actual colors on the console leveraging ANSI escape codes
* for text color.
*/
using namespace std;

/*
* Below we create ANSI escape codes for text colour
* ANSI escape sequences are a series of characters that, 
* when included in text strings, control various text formatting, and 
* display options when printed or displayed in a terminal or console. 
* These sequences are used to apply text color, background color, 
* text styles (such as bold or underline), and cursor movement in text-based interfaces.
* ANSI escape sequences are widely used in command-line and terminal-based applications 
* for enhancing the display of text.
*/
const string RED_TEXT = "\033[1;31m";
const string YELLOW_TEXT = "\033[1;33m";
const string GREEN_TEXT = "\033[1;32m";
const string RESET_TEXT = "\033[0m";


int main() {


    int timer = 0; // Useful for tracking state of the traffic light system

    while (true) {

        // Let's use a switch statement to control the traffic light behaviour
        switch (timer) {
            case 0:
                cout << RED_TEXT << "Traffic Light: RED" << RESET_TEXT << endl;
                this_thread::sleep_for(chrono::seconds(3)); // Red light for 3 seconds
                timer = 1;
                break;
            case 1:
                cout << YELLOW_TEXT << "Traffic Light: YELLOW" << RESET_TEXT << endl;
                this_thread::sleep_for(chrono::seconds(3)); // Yellow light for 3 seconds
                timer = 2;
                break;
            case 2:
                cout << GREEN_TEXT << "Traffic Light: GREEN" << RESET_TEXT << endl;
                this_thread::sleep_for(chrono::seconds(3));
                timer = 0;
                break;
            default:
                cout << "Invalid traffic light colour";
        };
    };

    return 0;
}