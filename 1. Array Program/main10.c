#include <stdio.h>

// Write a program to find the frequency of each element in a given array.
int main() {
    int arr[] = {10, 20, 20, 30, 10, 40, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int visited[size];

    // Initialize visited array to 0
    for (int i = 0; i < size; i++) {
        visited[i] = 0;
    }

    printf("Element frequencies:\n");
    for (int i = 0; i < size; i++) {
        if (visited[i] == 0) {
            int count = 1;
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    visited[j] = 1;
                    count++;
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}