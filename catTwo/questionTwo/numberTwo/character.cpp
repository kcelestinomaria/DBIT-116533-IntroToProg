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
    }
    char lowerChar = tolower(inputCharacter);

    // Create array to hold our vowels
    char Vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    // Loop through Vowels array, check if vowel
    for (int i : Vowels) {
        if (Vowels[i] == lowerChar) {
            cout << "This is a vowel: " << lowerChar << endl;
        } else {
            cout << "This is a consonant: " << lowerChar << endl;
        }
    }

    return 0;
}