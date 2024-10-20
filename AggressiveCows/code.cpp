/* AGGRCOW - Aggressive cows
#binary-search

Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1 ... xN (0 <= xi <= 1,000,000,000).

His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?

Input
t – the number of test cases, then t test cases follows.
* Line 1: Two space-separated integers: N and C
* Lines 2..N+1: Line i+1 contains an integer stall location, xi

Output
For each test case output one integer: the largest minimum distance. */

#include <iostream>
#include <vector>
#include <algorithm> // For sort function
using namespace std;

bool isPossible(vector<int> &arr, int minAllowedDist, int N, int C) {
    int cows = 1, lastStallPos = arr[0];
    for (int i = 1; i < N; i++) { // Start checking from the second stall
        if (arr[i] - lastStallPos >= minAllowedDist) {
            cows++;
            lastStallPos = arr[i];
        }
        if (cows == C) {
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> &arr, int N, int C) {
    sort(arr.begin(), arr.end());

    int st = 1;
    int end = arr[N - 1] - arr[0];
    int ans = -1;
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, mid, N, C)) {
            ans = mid;
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int N, C;
    cout << "Enter the number of stalls (N) and cows (C): ";
    cin >> N >> C;

    vector<int> stalls(N);
    cout << "Enter the stall positions: ";
    for (int i = 0; i < N; i++) {
        cin >> stalls[i];
    }

    int result = getDistance(stalls, N, C);
    cout << "The largest minimum distance is: " << result << endl;

    return 0;
}
