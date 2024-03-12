#include <iostream>
#include <climits> // Include this header for INT_MIN
using namespace std;

int maxINP(int arr[], int size) {
    int MAX = INT_MIN; // Initialize MAX with the minimum integer value
    for (int i = 0; i < size; i++) {
        if (arr[i] > MAX) {
            MAX = arr[i];
        }
    }
    return MAX;
}

int main() {
    int arr[100];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "The array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int maxElement = maxINP(arr, size);
    cout << "Max value in the array is: " << maxElement << endl;

    return 0;
}
