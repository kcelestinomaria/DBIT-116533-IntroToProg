#include <iostream>
#include <string>
#include <map>

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

    // We use a 'for' statement and several map in-built methods to successfully
    // loop through the 'gradeDistribution' map data structure, and output 
    // a grade from its corresponding inputted score.
    for (map<int, char>::const_iterator it = gradeDistribution.begin(); it != gradeDistribution.end(); ++it) {
        if (courseScore >= it->first) {
            grade = it->second;
        } else {
            break;
        }
    }

    // Now output the code
    cout << "Hi " << fullName << endl;
    cout << "The grade for the score " << courseScore << " of course name " << courseName << " is - " << grade << endl;

    return 0;
}