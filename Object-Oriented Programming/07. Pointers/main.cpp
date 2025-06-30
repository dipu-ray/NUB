#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;

    cout << "Address of num: " << ptr << endl;

    return 0;
}