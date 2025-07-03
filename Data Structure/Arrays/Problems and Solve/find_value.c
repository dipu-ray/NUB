#include <stdio.h>
#include <stdbool.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", a[i][j]);
        }
    }

    int find;
    scanf("%d", &find);
    bool found = false;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] == find) {
                found = true;
            }
        }
    }

    if(found == true) {
        printf("Found");
    }
    else {
        printf("Not found");
    }
}