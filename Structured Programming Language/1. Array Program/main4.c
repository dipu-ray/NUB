#include <stdio.h>

// Write a program to count how many times a particular element appears in an array.
int main() {
    int arr[] = {10, 20, 30, 20, 40, 20, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 20;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    printf("Element %d occurs %d times.\n", element, count);
    return 0;
}