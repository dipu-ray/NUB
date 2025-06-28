#include <stdio.h>

// Printing array (One dimentional). There array size are your id last one digit and array name are your name.
int main() {
    int dipu_ray[9];
    for (int i = 0; i < 9; i++) {
        scanf("%d", &dipu_ray[i]);
    }

    for (int i = 0; i < 9; i++) {
        printf("%d ", dipu_ray[i]);
    }

    return 0;
}