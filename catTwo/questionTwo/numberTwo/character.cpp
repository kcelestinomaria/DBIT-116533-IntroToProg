#include <iostream>

using namespace std;


int main() {

    char inputCharacter;
    cout << "Enter a random character: " << endl;
    cin >> inputCharacter;

    if (isalpha(inputCharacter) == false) {
        cerr << "This is not a letter!" << endl;
        return 1;
    }
    char lowerChar = tolower(inputCharacter);

    char Vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    for (int i : Vowels) {
        if (Vowels[i] == lowerChar) {
            cout << "This is a vowel: " << lowerChar << endl;
        } else {
            cout << "This is a consonant: " << lowerChar << endl;
        }
    }

    return 0;
}