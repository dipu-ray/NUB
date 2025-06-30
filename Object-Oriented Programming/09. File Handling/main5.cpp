// Write a program to count the number of words in a file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("example.txt");
    string word;
    int count = 0;

    if (file.is_open()) {
        while (file >> word) {
            count++;
        }
        file.close();
        cout << "Total number of words: " << count << endl;
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}