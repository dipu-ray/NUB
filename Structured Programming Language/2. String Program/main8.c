#include <stdio.h>

// Program to Find the Frequency of a Character in a String
int findFrequency(char str[], char ch);

int main() {
    char str[100], ch;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);
    
    printf("Frequency of '%c': %d\n", ch, findFrequency(str, ch));
    return 0;
}

int findFrequency(char str[], char ch) {
    int i = 0, count = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }
    return count;
}