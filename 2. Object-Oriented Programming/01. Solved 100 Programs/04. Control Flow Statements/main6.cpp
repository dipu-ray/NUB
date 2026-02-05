#include <iostream>
using namespace std;

// Write a program to check if a character is a vowel or consonant using switch
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Vowel";
            break;
        default:
            cout << "Consonant";
    }

    return 0;
}