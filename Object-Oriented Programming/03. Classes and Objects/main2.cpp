// Implement a Circle Class to Calculate Area and Circumference

#include <iostream>
#include <cmath> // For M_PI

#ifndef M_PI
#define M_PI 3.1416
#endif

class Circle {
public:
    double radius = 5;
};

int main() {
    Circle circle;

    // Area formula: π * r^2
    double area = M_PI * circle.radius * circle.radius;

    // Circumference formula: 2 * π * r
    double circumference = 2 * M_PI * circle.radius;

    std::cout << "Radius of the circle is " << circle.radius << std::endl;
    std::cout << "The area of the circle is " << area << std::endl;
    std::cout << "The circumference of the circle is " << circumference << std::endl;

    return 0;
}