#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int start = 0, end = str.length() - 1;
    while (start < end) {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    string text;
    cout << "Enter a string: ";
    cin >> text;

    if (isPalindrome(text))
        cout << "Palindrome";
    else
        cout << "Not palindrome";

    return 0;
}