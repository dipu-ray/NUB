#include <stdio.h>
#include <string.h>

// Program to Reverse a String
void reverseString(char str[]);

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    reverseString(str);
    printf("Reversed string: %s\n", str);
    
    return 0;
}

void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}