// Write a program using #error directive

#include <iostream>
#ifndef VERSION
//  #error "VERSION not defined! Please define before compiling."
#endif

using namespace std;

int main() {
    cout << "Program Running..." << endl;
    return 0;
}