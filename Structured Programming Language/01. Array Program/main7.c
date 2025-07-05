#include <stdio.h>

// Write a program to find the smallest element in a given array.
int main() {
    int arr[] = {50, 20, 30, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int smallest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Smallest element: %d\n", smallest);
    return 0;
}