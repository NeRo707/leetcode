#include <bits/stdc++.h>
using namespace std;

vector<bool> vis(21, false);
vector<int> adj[21];
int cnt1 = 0;

void dfs(int v, int p) {

  if (vis[v] == 1) {
    cnt1++;
    return;
  }

  vis[v] = true;

  for (int u : adj[v]) {
    if (u != p) {
      dfs(u, v);
    }
  }

  return;
}

int main() {
  int n, m;

  cin >> n >> m;

  for (int k = 1; k <= m; k++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if (!vis[i]) {
      dfs(i, -1);
      cnt++;
    }
  }

  cout<<(cnt1 <= 0 && cnt == 1 ? "YES" : "NO")<<endl;

  return 0;
}
