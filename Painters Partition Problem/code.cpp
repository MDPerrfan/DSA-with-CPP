/* Problem Description:
You are given an array arr[] where each element of the array represents the time required to paint a board. You have m painters, and the goal is to paint all the boards such that:

Each painter paints a contiguous sequence of boards.
The time taken to paint a board is proportional to its length, i.e., the value of the element in the array.
Every painter works independently, but only on a continuous segment of boards.
You need to minimize the time taken to paint all the boards, where the time taken is the maximum time that any painter will spend painting their boards. The time that a painter takes to paint a contiguous segment of boards is the sum of the time required for each board in that segment.

Constraints:
You can allocate different numbers of boards to different painters.
A painter can only paint contiguous boards.
You are required to find the minimum possible time that ensures all boards are painted, considering the constraints.
Example:
Input:
arr[] = {5, 10, 20, 30} (time to paint each board)
m = 2 (number of painters)
Output:
40 (minimum time to paint all the boards)
Explanation:
Painter 1 paints the first two boards: {5, 10} (total time = 15).
Painter 2 paints the last two boards: {20, 30} (total time = 50).
The maximum time a painter takes is 50, so this distribution is not optimal. */
#include<iostream>
#include<vector>
using namespace std;
  
bool isPossible(vector<int> &arr, int n, int m, int maxAllowed) {
    int painters = 1;  // Start with 1 painter
    int time = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > maxAllowed) {
            return false;  // A single board exceeding maxAllowed can't be painted
        }

        if(time + arr[i] <= maxAllowed) {
            time += arr[i];
        } else {
            painters++;
            time = arr[i];
            if(painters > m) {
                return false;  // More painters than allowed
            }
        }
    }

    return true;
}

int minTimeToPaint(vector<int> &arr, int n, int m) {
    if (m > n) {
        return -1;  // More painters than boards is not possible
    }

    int st = arr[0];  // Start with the first element
    int end = 0;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        end += arr[i];  // Total sum of all times
        st = max(st, arr[i]);  // Minimum time is the largest single board
    }

    while(st <= end) {
        int mid = st + (end - st) / 2;

        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {5, 10, 20, 30};
    int n = arr.size();
    int m = 2;  // Number of painters

    cout << minTimeToPaint(arr, n, m) << endl;

    return 0;
}
