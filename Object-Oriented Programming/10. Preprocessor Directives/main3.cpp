// Write a program using #ifndef to prevent multiple inclusions of a header file

#ifndef MYHEADER_H
#define MYHEADER_H
void showMessage();
#endif


#include <iostream>
// #include "MyHeader.h"
using namespace std;
void showMessage() {
    cout << "Hello from MyHeader!" << endl;
}


// #include "MyHeader.h"
int main() {
    showMessage();
    return 0;
}