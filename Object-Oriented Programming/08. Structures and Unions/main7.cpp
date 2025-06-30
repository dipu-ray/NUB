#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char ch;
};

int main() {
    Data d;

    d.i = 10;
    cout << "After assigning int: " << d.i << endl;

    d.f = 3.14;
    cout << "After assigning float: " << d.f << endl;

    d.ch = 'A';
    cout << "After assigning char: " << d.ch << endl;

    // Note: Previous values are lost due to memory sharing
    return 0;
}