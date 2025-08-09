// Create a program that writes an array of integers to a file and then reads it back

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    ofstream outFile("array.txt");

    if (outFile.is_open()) {
        for (int i = 0; i < 5; i++) {
            outFile << arr[i] << " ";
        }
        outFile.close();
        cout << "Array written to file." << endl;
    }

    ifstream inFile("array.txt");
    int num;

    cout << "Reading array from file: ";
    while (inFile >> num) {
        cout << num << " ";
    }
    inFile.close();

    return 0;
}