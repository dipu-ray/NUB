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


// #include <iostream>
// #include "MyHeader.h"  // Correct way to include local header
// using namespace std;
int main() {
    cout << "Demonstrating difference between <> and \"\"" << endl;
    showMessage();
    return 0;
}
