#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    if (remove("example.txt") == 0) {
        cout << "File deleted successfully." << endl;
    } else {
        cout << "Error deleting file or file not found." << endl;
    }

    return 0;
}