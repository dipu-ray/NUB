#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

int main() {
    Complex c1, c2, sum;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> c1.real >> c1.imag;

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> c2.real >> c2.imag;

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    cout << "Sum = " << sum.real << " + " << sum.imag << "i" << endl;

    return 0;
}