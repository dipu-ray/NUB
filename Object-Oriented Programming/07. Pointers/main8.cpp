#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of dynamic array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}