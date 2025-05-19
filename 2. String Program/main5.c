#include <stdio.h>

// Program to Convert a String to Uppercase (Without strupr)
void toUppercase(char str[]);

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    toUppercase(str);
    printf("Uppercase string: %s\n", str);
    return 0;
}

void toUppercase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase
        }
        i++;
    }
}