// To calculate the Fibonacci series summation up to n terms

#include <stdio.h>

// Recursive function to find nth Fibonacci number
int fibonacci(int n) {
    if(n == 0) {
        return 0;
    }
    else if(n == 1) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to calculate sum of first n Fibonacci numbers
int fibonacci_sum(int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += fibonacci(i);
    }
    return sum;
}

int main() {
    int n;
    printf("Enter how many Fibonacci numbers to sum: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Please enter a non-negative number.\n");
    }
    else {
        int result = fibonacci_sum(n);
        printf("Sum of first %d Fibonacci numbers is: %d\n", n, result);
    }

    return 0;
}
