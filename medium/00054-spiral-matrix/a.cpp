class Solution {
public:
    vector<int> ans;
    vector<vector<int>> visited;
    vector<vector<int>> mat;
    int n, m;
    void dfs(int i, int j) {
        if (i < 0 || i >= n || j < 0 || j >= m || visited[i][j])
            return;
        visited[i][j] = 1;
        ans.push_back(mat[i][j]);
        if (i <= j + 1 && j + 1 < m && !visited[i][j + 1])
            dfs(i, j + 1);
        if (i + 1 < n && !visited[i + 1][j])
            dfs(i + 1, j);
        if (j - 1 >= 0 && !visited[i][j - 1])
            dfs(i, j - 1);
        if (i - 1 >= 0 && !visited[i - 1][j])
            dfs(i - 1, j);
    }
    vector<int> spiralOrder( vector<vector<int>>& matrix) {
        if (matrix.empty()) return {};
        n = matrix.size();
        m = matrix[0].size();
        mat = matrix;
        visited = vector<vector<int>>(n, vector<int>(m, 0));
        dfs(0, 0);
        return ans;
    }
};
