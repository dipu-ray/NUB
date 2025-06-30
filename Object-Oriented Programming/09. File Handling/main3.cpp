#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt", ios::app);

    if (file.is_open()) {
        file << "This line is appended to the file.\n";
        file.close();
        cout << "Text appended successfully." << endl;
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}