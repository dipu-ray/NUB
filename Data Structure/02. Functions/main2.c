// Functions with no arguments and a return value

#include <stdio.h>

int sum() {
    int a = 10;
    int b = 15;
    return a+b;
}

int main() {
    int summations = sum();
    printf("%d", summations);

    return 0;
}