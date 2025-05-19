#include <stdio.h>

// Linear search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return index if element is found
        }
    }
    return -1; // Return -1 if element is not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = linearSearch(arr, n, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found.\n");
    }

    return 0;
}