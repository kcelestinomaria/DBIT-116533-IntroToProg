#include <iostream>
#include <string>
#include <map>

/* ~~~ ABOUT THIS PROGRAM
* We write a simple C++ program using if…else-if…else conditional (decision) structure to 
* out an appropriate full name and grade of a student depending on the score entered by 
* the user. 
* We do prompt the user, on the console,
* to input the full name of the student, the course and the score.
*/

using namespace std;

int main() {

    // We first declare the variables to hold our student's data in memory
    string fullName, courseName;
    int courseScore;

    // We import and use the C++ map data structure, to store
    // our student's scores and corresponding grades as key-value pairs
    map<int, char> gradeDistribution;

    gradeDistribution[0] = 'F';
    gradeDistribution[40] = 'D';
    gradeDistribution[50] = 'C';
    gradeDistribution[60] = 'B';
    gradeDistribution[70] = 'A';

    // We proceed to prompt the user with a greeting
    cout << "Hi there! Welcome to our C++ grade checker!" << endl;
    cout << "\n";

    // We then ask the user to enter their fullname
    cout << "To start... please enter your fullname" << endl;
    getline(cin, fullName);

    // Ask user for his/her course name
    cout << "Thank you! Now enter the course you want to check the grade for!" << endl;
    getline(cin, courseName);

    // Ask user for the score of his/her course
    cout << "Amazing! Finally, enter the score you got for that course." << endl;
    cin >> courseScore;

    // let's validate the user input, to ensure our program does not get an invalid score
    if (courseScore < 0 || courseScore > 100) {
        cerr << "This is an invalid score. Your score must be between the range of 0 and 100.";
        return 1; // This terminates the program with a non-zero code, if the 'invalid score' error occurs
    }

    // Declare and initiate the 'grade' variable
    // We give it a default value for edge cases e.g when the score is invalid,
    // or when it iterates through a loop
    char grade = '?';

    // Determine the grade based on the course score using if...else-if...else statements
    if (courseScore >= 70) {
        grade = gradeDistribution[70]; // Assign the corresponding grade for a score of 70 or more
    } else if (courseScore >= 60) {
        grade = gradeDistribution[60]; // Assign the corresponding grade for a score between 60 and 69
    } else if (courseScore >= 50) {
        grade = gradeDistribution[50]; // Assign the corresponding grade for a score between 50 and 59
    } else if (courseScore >= 40) {
        grade = gradeDistribution[40]; // Assign the corresponding grade for a score between 40 and 49
    } else {
        grade = gradeDistribution[0]; // Assign the corresponding grade for a score less than 40
    }


    // Now output the code
    cout << "Hi " << fullName << endl;
    cout << "The grade for the score " << courseScore << " of course name " << courseName << " is - " << grade << endl;

    return 0;
}