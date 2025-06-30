// Create a program that dynamically allocates an integer using new

#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;

    *ptr = 25;

    cout << "Dynamically allocated integer value: " << *ptr << endl;

    delete ptr;

    return 0;
}