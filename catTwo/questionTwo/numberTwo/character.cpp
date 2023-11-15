#include <iostream>

using namespace std;


int main() {

    char inputCharacter;
    cout << "Enter a random character: " << endl;
    cin >> inputCharacter;

    // Check if letter or not
    if (isalpha(inputCharacter) == false) {
        cerr << "This is not a letter!" << endl;
        return 1;
    } else {
        char lowerChar = tolower(inputCharacter);

    /*
    // Create array to hold our vowels
    char Vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    
    // Loop through Vowels array, check if vowel
    for (int i : Vowels) {
        if ((Vowels[i] == lowerChar) == true) {
            cout << "This is a vowel: " << lowerChar << endl;
        } else {
            cout << "This is a consonant: " << lowerChar << endl;
        }
    }
    }

    */
    if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
        cout << "this is a vowel" << endl;
    } else {
        cout << "this is a constant" << endl;
    }
    }
    
    return 0;
}