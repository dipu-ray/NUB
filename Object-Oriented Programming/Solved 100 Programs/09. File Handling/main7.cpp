// Write a program to search for a specific word in a file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("example.txt");
    string word, target;
    bool found = false;

    cout << "Enter word to search: ";
    cin >> target;

    if (file.is_open()) {
        while (file >> word) {
            if (word == target) {
                found = true;
                break;
            }
        }
        file.close();

        if (found)
            cout << "Word found in file." << endl;
        else
            cout << "Word not found." << endl;
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}