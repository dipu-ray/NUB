#include <iostream>
#define DEBUG
using namespace std;

int main() {
    #ifdef DEBUG
        cout << "DEBUG mode is ON" << endl;
    #endif

    cout << "Program running..." << endl;
    return 0;
}