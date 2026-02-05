#include <stdio.h>

// Program to Count Vowels and Consonants in a String
void countVowelsAndConsonants(char str[], int *vowels, int *consonants);

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    countVowelsAndConsonants(str, &vowels, &consonants);
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}

void countVowelsAndConsonants(char str[], int *vowels, int *consonants) {
    int i = 0;
    while (str[i] != '\0') {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        i++;
    }
}