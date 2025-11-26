class Solution {
private:
    vector<vector<int>> mtx;
    vector<vector<bool>> visited;
    int cnt = 1;
    void dfs(int x, int y, int dx, int dy, int n) {
        // Base cases: out of bounds or cell already visited
        if(x < 0 || x >= n || y < 0 || y >= n || visited[x][y]) {
            return;
        }
        mtx[x][y] = cnt++;
        visited[x][y] = true;
        // Try to move in the current direction
        dfs(x+dx, y+dy, dx, dy, n);
        // If we can't move in the current direction, turn right
        if(dx == 0 && dy == 1) dfs(x+1, y, 1, 0, n); // Move down
        else if(dx == 1 && dy == 0) dfs(x, y-1, 0, -1, n); // Move left
        else if(dx == 0 && dy == -1) dfs(x-1, y, -1, 0, n); // Move up
        else if(dx == -1 && dy == 0) dfs(x, y+1, 0, 1, n); // Move right
    }
public:
    vector<vector<int>> generateMatrix( int n) {
        mtx = vector<vector<int>>(n, vector<int>(n));
        visited = vector<vector<bool>>(n, vector<bool>(n));
        dfs(0, 0, 0, 1, n); // Start moving to the right
        return mtx;
    }
};
