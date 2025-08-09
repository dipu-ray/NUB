// Write a program to demonstrate #undef directive

#include <iostream>
#define VALUE 10
#undef VALUE
using namespace std;

int main() {
    #ifdef VALUE
        cout << "VALUE is defined: " << VALUE << endl;
    #else
        cout << "VALUE is undefined." << endl;
    #endif

    return 0;
}