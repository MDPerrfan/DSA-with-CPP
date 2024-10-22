#include <iostream>
using namespace std;

// Function to implement Bubble Sort
void bubbleSort(int arr[], int n) {
    // Outer loop for the number of passes
    for (int i = 0; i < n - 1; i++) {
        // Inner loop for comparing adjacent elements
        bool swapped = false; // To optimize and stop if no swaps
        for (int j = 0; j < n - i - 1; j++) {
            // If the current element is greater than the next, swap them
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no elements were swapped, the array is already sorted
        if (!swapped)
            break;
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
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: \n";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}
