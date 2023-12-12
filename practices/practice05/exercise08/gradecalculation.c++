#include <iostream>

/*
* This program takes the scores of students in different subjects and,
* calculates their grades. Use arrays, loops, and switch cases. 
* Consider the grading criteria: A (90-100), B (80-89), C (70-79), D (60-69), F (0-59).
*/

using namespace std;

int main() {

    const int numOfSubjects = 5;
    int scores[numOfSubjects];
    char grades[numOfSubjects];

    // Let's take input of the scores
    cout << "Enter scores for " << numOfSubjects << " subjects:\n";
    for (int iterator = 0; iterator < numOfSubjects; ++iterator) {
        cout << "Subject " << iterator + 1 << ": ";
        cin >> scores[iterator];
    }

    // Next, we calculate the grades
    for(int counter = 0; counter < numOfSubjects; ++counter) {
        switch(scores[counter] / 10) {
            case 10:
            break;
            case 9: 
                grades[counter] = 'A';
            break;
        }
    }
}