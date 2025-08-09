#include <iostream>
using namespace std;

// Write a program to compute the area and circumference of a circle using float data type
int main() {
    float radius, area, circumference;
    const float PI = 3.1416;

    cout << "Enter radius: ";
    cin >> radius;

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}