#include <bits/stdc++.h>
using namespace std;

int n;
int G[21][21];
vector<bool> used(21);
vector<int> ans;

void dfs(int v, int par) {
  used[v] = true;

  for (int k = 1; k <= n; k++) {
    if (G[v][k]) {
      if (!used[k]) {
        dfs(k, v);
      } else if (k != par) {
        ans.push_back(G[v][k]);
        G[v][k] = 0;
        G[k][v] = 0;
      }
    }
  }
}

int main() {
  int m, x, y;
  cin >> n >> m;

  for (int k = 1; k <= m; k++) {
    cin >> x >> y;
    G[x][y] = G[y][x] = k;
  }

  dfs(1, -1);

  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}