#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt");

    if (file.is_open()) {
        file << "Hello, this is a sample text written to the file.\n";
        file.close();
        cout << "File created and text written successfully." << endl;
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}