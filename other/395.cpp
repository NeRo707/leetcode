#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mtx;
vector<vector<bool>> visited;
int cnt = 1;

void dfs(int x, int y, int dx, int dy, int n) {

  if (x < 0 || x >= n || y < 0 || y >= n || visited[x][y]) {
    return;
  }

  mtx[x][y] = cnt++;
  visited[x][y] = true;

  dfs(x + dx, y + dy, dx, dy, n);

  if (dx == 0 && dy == 1)
    dfs(x + 1, y, 1, 0, n);
  else if (dx == 1 && dy == 0)
    dfs(x, y - 1, 0, -1, n);
  else if (dx == 0 && dy == -1)
    dfs(x - 1, y, -1, 0, n);
  else if (dx == -1 && dy == 0)
    dfs(x, y + 1, 0, 1, n);
}

vector<vector<int>> generateMatrix(int n) {

  int root = sqrt(n);

  if (root * root != n) {
    cout << "Impossible" << endl;
    return vector<vector<int>>();
  }

  mtx = vector<vector<int>>(root, vector<int>(root));
  visited = vector<vector<bool>>(root, vector<bool>(root));

  dfs(0, 0, 0, 1, root);

  return mtx;
}

int main() {
  int n;
  cin >> n;

  vector<vector<int>> result = generateMatrix(n);

  for (auto row : result) {
    for (auto num : row) {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}

// https://leetcode.com/problems/spiral-matrix-ii/description/ 🗿 👍 👍