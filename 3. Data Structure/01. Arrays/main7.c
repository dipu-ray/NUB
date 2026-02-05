#include <stdio.h>
#include <stdbool.h>

// Search an element in an array
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int search;
    scanf("%d", &search);
    bool found = false;

    for(int i = 0; i < n; i++) {
        if(a[i] == search) {
            found = true;
        }
    }

    if(found == true) {
        printf("Found");
    }

    else {
        printf("Not found");
    }

    return 0;
}