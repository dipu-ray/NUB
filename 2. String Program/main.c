#include <stdio.h>

// Program to Find the Length of a String (Without strlen)
int stringLength(char str[]);

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%[^\n]", str); // Read string with spaces
    
    printf("Length of the string: %d\n", stringLength(str));
    return 0;
}

int stringLength(char str[]) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}