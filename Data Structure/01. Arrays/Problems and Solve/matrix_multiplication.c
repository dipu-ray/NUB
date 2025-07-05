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

    long long int multiplication = 1;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            multiplication *= a[i][j];
        }
    }

    printf("The multiplication value: %d", multiplication);

    return 0;
}