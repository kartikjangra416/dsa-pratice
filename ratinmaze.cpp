#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issafe(int x, int y, int n, vector<vector<int>>& visited, vector<vector<int>>& arr){
    if (x>=0 && x<n && y>=0 && y<n && visited[x][y]==0 && arr[x][y]==1) {
       return true;
    } else {
        return false;
    }
}

void solve(vector<vector<int>>& arr, int n, vector<string>& ans, int x, int y, vector<vector<int>>& visited, string path){
    if (x==n-1 && y==n-1) {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // Down
    int newx = x + 1;
    int newy = y;
    if (issafe(newx, newy, n, visited, arr)) {
        solve(arr, n, ans, newx, newy, visited, path + 'D');
    }

    // Right
    newx = x;
    newy = y + 1;
    if (issafe(newx, newy, n, visited, arr)) {
        solve(arr, n, ans, newx, newy, visited, path + 'R');
    }

    // Up
    newx = x - 1;
    newy = y;
    if (issafe(newx, newy, n, visited, arr)) {
        solve(arr, n, ans, newx, newy, visited, path + 'U');
    }

    // Left
    newx = x;
    newy = y - 1;
    if (issafe(newx, newy, n, visited, arr)) {
        solve(arr, n, ans, newx, newy, visited, path + 'L');
    }

    visited[x][y] = 0;
}

vector<string> solution(vector<vector<int>>& arr, int n) {
    vector<string> ans;
    if (arr[0][0] == 0) {
        return ans;
    }
    
    int srcx = 0;
    int srcy = 0;
    vector<vector<int>> visited(n, vector<int>(n, 0));
    string path = "";
    solve(arr, n, ans, srcx, srcy, visited, path);
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    int rows = 4;
    int cols = 4;

    // Create and initialize the maze
    vector<vector<int>> arr = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    // Print the maze
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    vector<string> paths = solution(arr, 4);
    if (paths.empty()) {
        cout << "No path found." << endl;
    } else {
        cout << "Paths found: " << endl;
        for (const string &path : paths) {
            cout << path << endl;
        }
    }

    return 0;
}
