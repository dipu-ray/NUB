#include <stdio.h>

// Write a program to calculate the sum of all elements in a given array.
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("Sum of elements: %d\n", sum);

    return 0;
}