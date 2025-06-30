// Write a program to use conditional compilation

#include <iostream>
#define LEVEL 2
using namespace std;

int main() {
    #if LEVEL == 1
        cout << "Level 1: Beginner" << endl;
    #elif LEVEL == 2
        cout << "Level 2: Intermediate" << endl;
    #else
        cout << "Unknown Level" << endl;
    #endif

    return 0;
}