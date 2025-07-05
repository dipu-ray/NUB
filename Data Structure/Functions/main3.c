#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
float divide(int a, int b) {
    return (float)a / b;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nSummation: %d + %d = %d\n", num1, num2, add(num1, num2));
    printf("Subtraction: %d - %d = %d\n", num1, num2, subtract(num1, num2));
    printf("Multiplication: %d * %d = %d\n", num1, num2, multiply(num1, num2));

    if (num2 != 0) {
        printf("Division: %d / %d = %.2f\n", num1, num2, divide(num1, num2));
    }
    else {
        printf("Division: Cannot divide by zero!\n");
    }

    return 0;
}