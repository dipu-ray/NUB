// Write a program using #define to define a constant and use it

#include <iostream>
#define PI 3.1416
using namespace std;

int main() {
    float radius, area;
    cout << "Enter radius: ";
    cin >> radius;

    area = PI * radius * radius;
    cout << "Area of circle: " << area << endl;

    return 0;
}