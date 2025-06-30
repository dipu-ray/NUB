#include <iostream>
using namespace std;

int main() {
    int n, x, flag = 0;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            flag = 1;
            cout << x << " found at position " << i + 1 << endl;
            break;
        }
    }

    if (flag == 0) {
        cout << x << " not found in the array." << endl;
    }

    return 0;
}