#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, next, count = 0;
    cout << "Enter number of terms: ";
    cin >> n;

    do {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
        count++;
    } while (count < n);

    return 0;
}