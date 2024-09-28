#include <iostream>

using namespace std;

int main(){

    // Inverted triangle pattern with characters
    for(int i = 0; i < 5; i++) {
        // Print leading spaces
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print the characters, starting from 'A' and increasing each row
        for(int k = 0; k < 5 - i; k++) {
            cout << char(65 + i);  // char(65) is 'A'
        }
        cout << "\n";
    }

    // Pyramid pattern with numbers
    for(int i = 0; i < 5; i++) {
        // Print leading spaces to center-align the pyramid
        for(int j = 0; j < 5 - i - 1; j++) {
            cout << " ";
        }
        // Print increasing numbers in each row
        for(int k = 1; k < i + 1; k++) {
            cout << k;
        }
        // Print decreasing numbers for symmetry
        for(int l = i - 1; l > 0; l--) {
            cout << l;
        }
        cout << "\n";
    }

    // Hollow diamond pattern
    // Upper half (including the middle line)
    for(int i = 0; i < 5; i++) {
        // Print leading spaces to center-align the diamond
        for(int j = 0; j < 5 - i - 1; j++) {
            cout << " ";
        }
        // Print the first star
        cout << "*";
        // Print hollow spaces between the stars (if any)
        if(i != 0) {
            for(int k = 0; k < 2 * i - 1; k++) {
                cout << " ";
            }
            // Print the second star
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the hollow diamond
    for(int i = 1; i < 5; i++) {
        // Print leading spaces
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print the first star
        cout << "*";
        // Print hollow spaces between the stars (if any)
        if(i != 4) {
            for(int k = 0; k < 2 * (4 - i) - 1; k++) {
                cout << " ";
            }
            // Print the second star
            cout << "*";
        }
        cout << endl;
    }

    int n = 5;

    // Butterfly pattern
    // Upper half of the butterfly
    for(int i = 0; i < n; i++) {
        // Left side of the butterfly (increasing stars)
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        // Middle part (spaces between the wings)
        for(int j = 0; j < 2 * (n - i); j++) {
            cout << " ";
        }
        // Right side of the butterfly (increasing stars)
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the butterfly
    for (int i = n; i >= 1; i--) {
        // Left side of the butterfly (decreasing stars)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        // Middle part (spaces between the wings)
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        
        // Right side of the butterfly (decreasing stars)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        cout << endl;
    }

    return 0;
}
