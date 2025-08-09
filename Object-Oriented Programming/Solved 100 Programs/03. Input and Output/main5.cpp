#include <iostream>
#include <string>
using namespace std;

// Write a program to take a sentence as input and display it using getline()
int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << "You entered: " << sentence << endl;
    return 0;
}