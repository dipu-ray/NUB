// To calculate the factorial of a number

#include <stdio.h>

int fact(int n) {
    if(n == 0 || n == 1) {
        return 1;  // Base case: 0! = 1! = 1
    }

    int smallerFact = fact(n - 1);   // Recursive call
    int result = n * smallerFact;    // Multiply current n
    return result;
}

int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else {
        int factorial = fact(n);
        printf("Factorial of %d is: %d\n", n, factorial);
    }

    return 0;
}