#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "You selected Addition."; break;
        case 2: cout << "You selected Subtraction."; break;
        case 3: cout << "You selected Multiplication."; break;
        default: cout << "Invalid choice.";
    }

    return 0;
}