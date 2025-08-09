// Create a program using macro functions

#include <iostream>
#define SQUARE(x) ((x)*(x))
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Square is: " << SQUARE(num) << endl;

    return 0;
}