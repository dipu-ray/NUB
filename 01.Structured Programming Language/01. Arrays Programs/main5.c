#include <stdio.h>

// Write a program to find the second largest element in a given array.
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0], second_largest = -1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest != -1) {
        printf("Second largest element: %d\n", second_largest);
    } else {
        printf("No second largest element found.\n");
    }

    return 0;
}