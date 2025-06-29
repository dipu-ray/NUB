#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float num;
    cout << "Enter a floating-point number: ";
    cin >> num;
    cout << fixed << setprecision(2);
    cout << "Number with 2 decimal places: " << num << endl;
    return 0;
}