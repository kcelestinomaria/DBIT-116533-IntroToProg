#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

    // declare a variable to hold the user's day of the week option in memory location
    int dayOfWeek;

    cout << "Days Of The Week!" << endl;
    cout << "Please select any number from 1 - 5 to get the corresponding classes for that day";
    cout << "\n1.Monday \n2.Tuesday \n3.Wednesday \n4.Thursday \n5.Friday" << endl;

    cin >> dayOfWeek;


    switch(dayOfWeek) {
        case 1:
            cout << "\n";
            cout << "Monday Classes\n....................." << endl;
            cout << "\t DBIT 1106: Math For Business Computing" << endl;
            cout << "\t DBIT 1102: Intro To Programming" << endl;
            break;
        case 2:
            cout << "\n";
            cout << "Tuesday Classes\n...................." << endl;
            cout << "\t DBIT 1102: Intro To Programming" << endl;
            cout << "\t DBIT 1104: Intro To Ethics" << endl;
            break;
        case 3:
            cout << "\n";
            cout << "Wednesday Classes\n.................." << endl;
            cout << "\t DBIT 1101: Fundamentals of I.T" << endl;
            cout << "\t DBIT 1105: Fundamentals of Accounting" << endl;
            break;
        case 4:
            cout << "\n";
            cout << "Thursday Classes\n..................." << endl;
            cout << "\t DBIT 1107: Business Communication" << endl;
            cout << "\t DBIT 1108: French Language and Culture" << endl;
            break;
        case 5:
            cout << "\n";
            cout << "Friday Classes\n....................." << endl;
            cout << "\t DBIT 1110: Software Engineering" << endl;
            cout << "\t DBIT 1111: Theology";
            break;
        default:
            cout << "\n";
            cout << "Invalid Entry";
    }

}