// Create a program that copies content from one file to another

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream source("example.txt");
    ofstream dest("copy.txt");
    string line;

    if (source.is_open() && dest.is_open()) {
        while (getline(source, line)) {
            dest << line << endl;
        }
        source.close();
        dest.close();
        cout << "File copied successfully." << endl;
    } else {
        cout << "Error opening files!" << endl;
    }

    return 0;
}