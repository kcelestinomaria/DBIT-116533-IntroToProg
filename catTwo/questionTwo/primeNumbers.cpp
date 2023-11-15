#include <iostream>
#include <vector>

/* ~~ SIEVE OF ERASTOTHENES ~~
* In this program, we use the a concept in discrete mathematics
* known as the Sieve of Erastothenes, to get the prime numbers 
* up to a number limit `limitNum`
*/

using namespace std;

void sieveOfErastothenes(int limitNum) {

    // We create a boolean vector to mark whether a number is a prime number
    vector<bool> isPrime(limitNum + 1, true);

    // Mark 0 or 1 as not prime numbers
    isPrime[0] = isPrime[1] = false;

    // Let's iterate through the numbers up to the square root of the `limitNum`
    for (int num_1 = 2; num_1 * num_1 <= limitNum; ++num_1) {
        // if num turns out to be a prime number, mark its multiples as not prime numbers
        if (isPrime[num_1]) {
            for (int num_2 = num_1 * num_1; num_2 <= limitNum; num_2 += num_1) {
                isPrime[num_2] = false;
            }
        }
    }

    // We then finally output the prime numbers
    cout << "Prime numbers up to the limit:" << limitNum << " are: \n";
    for (int num_1 = 2; num_1 <= limitNum; ++num_1) {
        if (isPrime[num_1]) {
            cout << num_1 << " ";
        }
    }
    cout << endl;
}

int main() {
    // Let's get the limit number from the user
    int limitNum;

    cout << "Enter the limit to out the prime numbers up to that limit" << endl;
    cin >> limitNum;

    // We call the Sieve of Erastothenes function
    sieveOfErastothenes(limitNum);

    return 0;
}