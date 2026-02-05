#include <stdio.h>

// Printing array (One dimentional). There array size are your id last one digit and array name are your name.
int main() {
    int dipu_ray[9];
    printf("Enter 9 integers value: \n");
    for (int i = 0; i < 9; i++) {
        scanf("%d", &dipu_ray[i]);
    }

    printf("\nYour entered values: \n");
    for (int i = 0; i < 9; i++) {
        printf("%d ", dipu_ray[i]);
    }

    return 0;
}