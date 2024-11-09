#include<iostream>
#include <string>

  bool isPalindrome(string s) {
     int left = 0, right = s.size() - 1;

        // Continue comparing characters while 'left' is less than 'right'.
        while (left < right) {
            // Increment 'left' pointer if the current character is not alphanumeric.
            if (!isalnum(s[left])) {
                ++left;
            }
            // Decrement 'right' pointer if the current character is not alphanumeric.
            else if (!isalnum(s[right])) {
                --right;
            }
            // If both characters are alphanumeric, compare them for equality ignoring case.
            else if (tolower(s[left]) != tolower(s[right])) {
                // If they don't match, it's not a palindrome.
                return false;
            } 
            // If characters match, move 'left' forward and 'right' backward to continue checking.
            else {
                ++left;
                --right;
            }
        }
        // If all characters match, the string is a palindrome.
        return true;
    }