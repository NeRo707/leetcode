#include <bits/stdc++.h>

using namespace std;
vector<int> g[21];
int vis[22];
bool cycle;
int n, m;

void dfs(int v) {
  vis[v] = 1;

  for (int u : g[v]) {
    if (!vis[u]) {
      dfs(u);
    } else if (vis[u] == 1) {
      cycle = true;
    }
  }
  vis[v] = 2;
}

int main() {

  cin >> n >> m;

  for (int k = 1; k <= m; k++) {
    int x, y;
    cin >> x >> y;

    g[x].push_back(y);
  }

  for (int k = 1; k <= n; k++) {
    if (!vis[k])
      dfs(k);
  }

  cout << (cycle ? "YES" : "NO");

  return 0;
}
