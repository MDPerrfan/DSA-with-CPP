#include <iostream>
#include <vector>
using namespace std;
// Recursive binary search function
int recursiveBinarySearch(vector<int>& arr, int left, int right, int target) {
    // Base case: If left index exceeds right, the target is not present
    if (left > right) {
        return -1;  // Target not found
    }

    // Find the middle index
    int mid = left + (right - left) / 2;

    // If the target is found at mid
    if (arr[mid] == target) {
        return mid;
    }

    // If target is smaller than mid, it must be in the left half
    if (arr[mid] > target) {
        return recursiveBinarySearch(arr, left, mid - 1, target);
    }

    // Otherwise, the target is in the right half
    return recursiveBinarySearch(arr, mid + 1, right, target);
}

// Binary Search function
int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // To avoid overflow

        if (arr[mid] == target) {
            return mid;  // Target found
        } else if (arr[mid] < target) {
            left = mid + 1;  // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}

int main() {
    // Example 1: Even number of elements
    vector<int> evenArr = {2, 4, 6, 8, 10, 12};
    // Example 2: Odd number of elements
    vector<int> oddArr = {1, 3, 5, 7, 9};

    int target;
    cout << "Enter the target to search in evenArr: ";
    cin >> target;

    // Perform binary search on the array with an even number of elements
    int result = binarySearch(evenArr, target);

    if (result != -1) {
        cout << "Target " << target << " found at index " << result << " in evenArr." << endl;
    } else {
        cout << "Target " << target << " not found in evenArr." << endl;
    }

    cout << "\nEnter the target to search in oddArr: ";
    cin >> target;

    // Perform binary search on the array with an odd number of elements
    result = binarySearch(oddArr, target);

    if (result != -1) {
        cout << "Target " << target << " found at index " << result << " in oddArr." << endl;
    } else {
        cout << "Target " << target << " not found in oddArr." << endl;
    }

    return 0;
}
