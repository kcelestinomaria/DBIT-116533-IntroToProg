#include <iostream>

using namespace std;

void sieveOfErastothenes(int upperLimit); // function prototype

int main() {

    // Let's get the upper limit from the user
    int upperLimit;

    cout << "Enter the upper number limit to output numbers up to that limit" << endl;
    cin >> upperLimit;

    // We then call the sieveOfErastothenes function
    sieveOfErastothenes(upperLimit);

    return 0;
}

void sieveOfErastothenes(int upperLimit) {
    
    // We create a boolean array to mark whether a number is a prime number or not!
    bool isPrime[upperLimit + 1];

    // Initialize all the elements of the created array to true
    fill(isPrime, isPrime + upperLimit + 1, true);

    // Mark 0 and 1 as not prime numbers 
    isPrime[0] = isPrime[1] = false;

    // Iterate through the numbers up to the square root of the `upperLimit` number
    for (int currentNumber = 2; currentNumber * currentNumber <= upperLimit; ++currentNumber) {
        // if the current number is a prime number, mark its multiples as not prime numbers
        if (isPrime[currentNumber]) {
            for (int multiple = currentNumber * currentNumber; multiple <= upperLimit; multiple += currentNumber) {
                isPrime[multiple] = false;
            }
        }
    }

    // We now finally output the prime numbers captured within the range
    cout << "Prime numbers up to the limit: " << upperLimit << " are: \n";
    for (int number = 2; number <= upperLimit; ++number) {
        if (isPrime[number]) {
            cout << number << " ";
        }
    }
    cout << endl;
}