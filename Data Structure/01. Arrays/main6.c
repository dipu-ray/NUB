#include <stdio.h>

// Find the largest element from an array
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int largest = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] > largest) {
            largest = a[i];
        }
    }

    printf("The largest element is: %d", largest);

    return 0;
}