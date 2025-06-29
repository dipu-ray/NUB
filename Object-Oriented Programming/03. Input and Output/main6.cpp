#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    cout << scientific << num << endl;
    return 0;
}