#include <stdio.h>

int sum(int n) {
    if(n == 1) {
        return 1;                   // Base case
    }
    else {
        return n + sum(n - 1);      // Recursive case
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if(n < 1) {
        printf("Please enter a positive integer.\n");
    }
    else {
        int result = sum(n);
        printf("Sum of first %d natural numbers is: %d\n", n, result);
    }

    return 0;
}