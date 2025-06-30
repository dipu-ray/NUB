// Write a program to copy a string using pointers.

#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];
    cout << "Enter a string: ";
    cin.getline(str1, 100);

    char *src = str1;
    char *dest = str2;

    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

    cout << "Copied string: " << str2 << endl;

    return 0;
}