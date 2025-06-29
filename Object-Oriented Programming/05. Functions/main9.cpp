#include <iostream>
using namespace std;

// Write a function to return the maximum element in an array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[5];
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Maximum element = " << findMax(arr, 5);
    return 0;
}