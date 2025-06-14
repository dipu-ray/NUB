#include <stdio.h>

// Write a program to check if a given array is sorted in ascending order.
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int isSorted = 1;  // Assume it's sorted

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 0;  // Found a pair that's not in order
            break;
        }
    }

    if (isSorted) {
        printf("Array is sorted in ascending order.\n");
    } else {
        printf("Array is not sorted.\n");
    }

    return 0;
}