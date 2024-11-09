 #include <iostream>
using namespace std;

// Function to implement Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i - 1;

        // Move elements of arr[0..i-1], that are greater than the key,
        // to one position ahead of their current position
        while (prev >= 0 && arr[prev] >curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        // Place the key at its correct position
        arr[prev + 1] = curr;
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
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: \n";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}
