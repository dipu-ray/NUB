#include <iostream>
using namespace std;

struct Numbers {
    int a, b, c;
};

int main() {
    Numbers num;

    cout << "Enter three numbers: ";
    cin >> num.a >> num.b >> num.c;

    int largest = num.a;

    if (num.b > largest) largest = num.b;
    if (num.c > largest) largest = num.c;

    cout << "Largest number: " << largest << endl;

    return 0;
}