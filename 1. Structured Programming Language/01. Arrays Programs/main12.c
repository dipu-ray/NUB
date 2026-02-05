#include <stdio.h>

// Write a program to check if a given array is a palindrome (reads the same forward and backward).
int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int isPalindrome = 1;

    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("Array is a palindrome.\n");
    } else {
        printf("Array is not a palindrome.\n");
    }

    return 0;
}