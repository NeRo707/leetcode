#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> G[21];
vector<bool> vis(21);
vector<pair<int, int>> ans;
set <int> s;
int cnt = 0;
bool ind = false;

void dfs(int v) {
  vis[v] = true;
  cnt++;

  if (ind)
    s.insert(v);

  for (int u : G[v]) {
    if (!vis[u]) {
      dfs(u);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int m, x, y;
  cin >> n >> m;
  G->resize(n + 1);
  vis.resize(n + 1);
  for (int k = 1; k <= m; k++) {
    cin >> x >> y;
    G[x].push_back(y);
    G[y].push_back(x);
  }

  for (int k = 1; k <= n; k++) {
    if (!vis[k]) {
      dfs(k);
      ans.push_back({cnt, k});
      cnt = 0;
    }
  }

  sort(ans.begin(), ans.end());
  fill(vis.begin(), vis.end(), false);
  ind = true;

  int mx_cnt = ans.back().first;
  int mn_v = INT_MAX;
  for (auto p : ans) {
    if (p.first == mx_cnt) {
      mn_v = min(mn_v, p.second);
    }
  }

  dfs(mn_v);

  for (auto k : s) {
    cout << k << " ";
  }

  return 0;
}
