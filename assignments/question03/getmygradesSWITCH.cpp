#include <iostream>
#include <string>
#include <map>

/* ~~~ ABOUT THIS PROGRAM ~~
* Here, we've implemented the program in question 2 
* using a selection decision structure (switch 
* case statement)
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
    char grade;

    // We use a 'switch' statement
    switch (courseScore) {
        case 0 ... 39:
            grade = 'F';
            break;
        case 40 ... 49:
            grade = 'D';
            break;
        case 50 ... 59:
            grade = 'C';
            break;
        case 60 ... 69:
            grade = 'B';
            break;
        case 70 ... 100:
            grade = 'A';
        default:
            grade = '?'; // when out of bounds, which fortunately is already captured in line 40
    }

    // Now output the code
    cout << "Hi " << fullName << endl;
    cout << "The grade for the score " << courseScore << " of course name " << courseName << " is: " << grade << endl;

    return 0;
}