#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10001], radj[10001];
vector<bool> visited;
vector<int> order, comp;

void dfs1(int v) {
  visited[v] = true;

  for (int u : adj[v]) {
    if (!visited[u])
      dfs1(u);
  }

  order.push_back(v);
}

void dfs2(int v) {
  visited[v] = true;
  comp.push_back(v);

  for (int u : radj[v]) {
    if (!visited[u])
      dfs2(u);
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    radj[v].push_back(u);
  }

  visited.assign(n + 1, false);

  for (int i = 1; i <= n; i++) {
    if (!visited[i])
      dfs1(i);
  }

  visited.assign(n + 1, false);
  int cnt = 0;

  for (int i = 1; i <= n; i++) {
    int v = order[n - i];
    if (!visited[v]) {
      dfs2(v);
      comp.clear();
      cnt++;
    }
  }

  cout << cnt << endl;

  return 0;
}
