#include <iostream>
using namespace std;

int main() {
    // Part 1: Basic Pointer
    int x = 10;
    int* ptr = &x;  // Pointer to x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value of ptr (Address of x): " << ptr << endl;
    cout << "Dereferenced value (*ptr): " << *ptr << endl;

    // Part 2: Pointer to Pointer
    int** ptr2ptr = &ptr;  // Pointer to the pointer ptr

    cout << "\nAddress of ptr: " << &ptr << endl;
    cout << "Value of ptr2ptr (Address of ptr): " << ptr2ptr << endl;
    cout << "Dereferenced ptr2ptr (*ptr2ptr) gives ptr value: " << *ptr2ptr << endl;
    cout << "Double dereferencing **ptr2ptr gives x value: " << **ptr2ptr << endl;

    // Part 3: Array Pointer
    int arr[] = {10, 20, 30, 40, 50};
    int* arrPtr = arr;  // Pointer to the array

    cout << "\nArray elements accessed using array pointer:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << *(arrPtr + i) << " (Using pointer notation)" << endl;
    }

    return 0;
}
