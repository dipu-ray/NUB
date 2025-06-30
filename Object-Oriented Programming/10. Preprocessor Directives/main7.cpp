#ifndef CUSTOMHEADER_H
#define CUSTOMHEADER_H
void greet();
#endif


#include <iostream>
// #include "CustomHeader.h"
using namespace std;
void greet() {
    cout << "Welcome to Custom Header!" << endl;
}


// #include "CustomHeader.h"
int main() {
    greet();
    return 0;
}