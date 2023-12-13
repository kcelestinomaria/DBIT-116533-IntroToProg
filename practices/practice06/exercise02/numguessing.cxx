#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    // seed for random number generation
    srand(time(0));

    int secretNumber = rand() % 100 + 1;

    int guess;

    do {
        // Ask user to guess the number
        cout << "Guess the secret number: ";
        cin >> guess;

        // We provide hints based on the user's guesses
        if (guess < secretNumber) {
            cout << "Your guessed number is too low! Try again!" << endl;
        } else if (guess > secretNumber) {
            cout << "Your guessed number is too high! Try again!" << endl;
        } else {
            cout << "Congratulations! Wow, you guessed the correct number!" << endl;
        }
    } while ( guess != secretNumber); // Continue until the correct guess is made

    return 0;
}

