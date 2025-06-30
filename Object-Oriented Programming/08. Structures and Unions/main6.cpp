#include <iostream>
using namespace std;

struct Numbers {
    int x, y;
};

int main() {
    Numbers num;

    cout << "Enter two numbers: ";
    cin >> num.x >> num.y;

    cout << "Before swap: x = " << num.x << ", y = " << num.y << endl;

    int temp = num.x;
    num.x = num.y;
    num.y = temp;

    cout << "After swap: x = " << num.x << ", y = " << num.y << endl;

    return 0;
}