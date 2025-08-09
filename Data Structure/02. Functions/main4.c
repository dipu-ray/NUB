// Create and call two functions to calculate the circumference and area of a circle if the radius is given

#include <stdio.h>
#define PI 3.1416  // define constant value for pi

float circumference(float radius) {
    return 2 * PI * radius;
}
float area(float radius) {
    return PI * radius * radius;
}

int main() {
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    printf("\nCircumference = %.2f\n", circumference(r));
    printf("Area = %.2f\n", area(r));

    return 0;
}