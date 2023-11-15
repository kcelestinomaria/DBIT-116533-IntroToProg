/*
* This program helps us evaluate prime numbers in a range of different numbers
*/
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    // First, check for special cases
    if (num <= 1) {
        return false;
    }

    // Next - check if number is divisible by all numbers up to its own square root
    for (int it = 2; it <= sqrt(num); ++it) {
        if (num % it == 0) {
            return false; // Not a prime number
        }
    }

    return true; // Is a prime number
}

int main() {

  int number;

  cout << "Enter any number to check if it's a prime or not" << endl;
  cin >> number;

   if (isPrime(number) == true) {
        cout << "This is a Prime Number" << endl;
   } else if (isPrime(number) == false) {
        cout << "This is not a Prime Number" << endl;
   }

   return 0;
}
