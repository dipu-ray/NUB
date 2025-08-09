#include <iostream>
using namespace std;

// Write a program to convert temperature from Celsius to Fahrenheit
int main() {
    float celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;

    cout << "Temperature in Fahrenheit = " << fahrenheit << endl;

    return 0;
}