#include <stdio.h>

// Printing array size
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Total size in bytes
    int totalSize = sizeof(a);
    // Size of one element
    int elementSize = sizeof(a[0]);
    // Number of elements
    int numberOfElements = totalSize / elementSize;
    
    printf("Total size of array (in bytes): %d\n", totalSize);
    printf("Size of one element (in bytes): %d\n", elementSize);
    printf("Number of elements in array: %d\n", numberOfElements);

    return 0;
}