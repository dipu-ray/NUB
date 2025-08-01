// Write a function to convert Celsius to Fahrenheit

#include <iostream>
using namespace std;

float celsiusToFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

int main() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    cout << "Temperature in Fahrenheit = " << celsiusToFahrenheit(celsius);
    return 0;
}