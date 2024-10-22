#include <iostream>
using namespace std;

// Function to implement Selection Sort
void selectionSort(int arr[], int n) {
    // Outer loop to move the boundary of the unsorted subarray
    for (int i = 0; i < n - 1; i++) {
        // Find the index of the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        swap(arr[minIndex], arr[i]);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: \n";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}
