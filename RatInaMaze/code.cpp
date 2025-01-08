#include <vector>
#include <iostream>
using namespace std;

void helper(vector<vector<int>> &mat, int r, int c, string path, vector<string> &ans, vector<vector<bool>> &vis) {
    int n = mat.size();
    // Correct boundary and validity check
    if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || vis[r][c]) {
        return;
    }
    // Base case: reached the destination
    if (r == n - 1 && c == n - 1) {
        ans.push_back(path);
        return;
    }
    // Mark the current cell as visited
    vis[r][c] = true;

    // Recursive calls for all directions
    helper(mat, r + 1, c, path + "D", ans, vis); // Down
    helper(mat, r - 1, c, path + "U", ans, vis); // Up
    helper(mat, r, c - 1, path + "L", ans, vis); // Left
    helper(mat, r, c + 1, path + "R", ans, vis); // Right

    // Backtrack by unmarking the current cell
    vis[r][c] = false;
}

vector<string> findPath(vector<vector<int>> &mat) {
    int n = mat.size();
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    vector<string> ans;
    string path = "";
    // Start from the top-left corner
    if (mat[0][0] == 1) { // Ensure the start cell is traversable
        helper(mat, 0, 0, path, ans, vis);
    }
    return ans;
}

int main() {
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> ans = findPath(mat);

    if (ans.empty()) {
        cout << "No path found" << endl;
    } else {
        for (string path : ans) {
            cout << path << endl;
        }
    }

    return 0;
}
