#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ifstream file("example.txt");
    vector<string> lines;
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            lines.push_back(line);
        }
        file.close();

        cout << "File content in reverse order:\n";
        for (int i = lines.size() - 1; i >= 0; i--) {
            cout << lines[i] << endl;
        }
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}