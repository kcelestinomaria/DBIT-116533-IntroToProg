#include <iostream>

using namespace std;

double areaOfTriangle(double, double);

int main() {

    char resp;
    double base, height;
    
    do {
        cout << "Hey there!" << endl;
        cout << "Do you want this program to calculate the area of a triangle?" << endl;
        cout << "Enter y - YES, or n - NO" << endl;
        cin >> resp;
        cout << "Ok, so enter the base of the imaginary triangle: " << endl;
        cin >> base;
        cout << "Thank you! Now input its height: " << endl;
        cin >> height;
        cout << areaOfTriangle(base, height) << endl;
    } while( resp == 'y');
}

double areaOfTriangle(double base, double height) {
    double area = 0.5 * base * height;
    return area;
}