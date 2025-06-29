#include <iostream>
using namespace std;

// Create a function to swap two numbers using call by reference
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b;
    return 0;
}