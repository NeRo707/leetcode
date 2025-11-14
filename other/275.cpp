#include <bits/stdc++.h>

using namespace std;

vector<int> g[21];
int vis[21];
int n;
void dfs(int v, int c) {

  c == 1 ? c = 2 : c = 1;
  vis[v] = c;

  for (int k : g[v]) {
    if(!vis[k]) {
      dfs(k, c);
    } else if(vis[v] == vis[k]) {
      cout << "NO";
      exit(0);
    }
  }
}

int main() {
  int m;
  cin >> n >> m;
  for (int k = 1; k <= m; k++) {
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  for (int k = 1; k <= n; k++) {
    if (vis[k] == 0)
      dfs(k, 1);
  }
  cout << "YES";
  return 0;
}
