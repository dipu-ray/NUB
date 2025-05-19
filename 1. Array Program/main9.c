#include <stdio.h>

// Write a program to remove duplicates from a given array.
int main() {
    int arr[] = {10, 20, 20, 30, 40, 50, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array before removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int newSize = size;

    // Removing duplicates
    for (int i = 0; i < newSize; i++) {
        for (int j = i + 1; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < newSize - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                newSize--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}