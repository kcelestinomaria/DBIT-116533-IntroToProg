#include <iostream>

/* PALINDROME CHECKER
* This program checks if a given string is a palindrome
*/

using namespace std;

bool isPalindrome(const string& str);

int main() {

    string input;

    cout << "Enter any string: " << endl;
    cin >> input;

    // Now, we check and print if the string is a palindrome
    if (isPalindrome(input)) {
        cout << "\"" << input << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << input << "\" is NOT a palindrome." << endl;
    }

    
    return 0;
}

bool isPalindrome(const string& str) {
    int length = str.length();

    // Check if the string is a palindrome using a for loop
    for (int iterator = 0; iterator < length / 2; ++iterator) {

        // Using an if statement, we compare the beginning and end of the string
        // Then, if any pair of characters is not equal, the string is NOT a palindrome
        if (str[iterator] != str[length - 1 - iterator]) {
            return false;
        }
    }

    // If the loop completes without returning false, the string is a palindrome
    return true;
}