#include <iostream>
using namespace std;

int main() {
    float length, width, area;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;

    area = length * width;

    cout << "Area of rectangle = " << area << endl;

    return 0;
}