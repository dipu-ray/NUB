#include <iostream>
using namespace std;

// Write a program that prints all even numbers from 1 to 100 using a for loop
int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0)
            cout << i << " ";
    }
    return 0;
}