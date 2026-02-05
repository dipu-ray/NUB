#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", a[i][j]);
        }
    }

    int largest = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] > largest) {
                largest = a[i][j];
            }
        }
    }

    printf("The largest value: %d", largest);

    return 0;
}