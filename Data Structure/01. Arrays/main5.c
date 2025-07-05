#include <stdio.h>

// Delete a single element from an array
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int p;
    scanf("%d", &p);

    for(int i = p; i < n; i++) {
        a[i-1] = a[i];
    }

    if(p <= n) {
        n--;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}