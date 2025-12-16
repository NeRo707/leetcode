#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> used(n + 1, 0);
vector<vector<int>> adj(n + 1);

void dfs(int v) {
  used[v] = 1;
  for (int u : adj[v]) {
    if (!used[u]) {
      dfs(u);
    }
  }
}

int main() {

  cin >> n;

  for (int k = 1; k <= n; k++) {
    int u, v;
    cin>> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int components = 0;

  for (int v = 1; v <= n; v++) {
    if (!used[v]) {
      dfs(v);
      components++;
    }
  }

  cout << components << "\n";

  return 0;
}