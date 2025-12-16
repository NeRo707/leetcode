#include <bits/stdc++.h>

using namespace std;

int g[21][21];
int vis[21];
int n;
void dfs(int v, int c) {
  vis[v] = c;

  c == 1 ? c = 2 : c = 1;

  for (int k = 1; k <= n; k++)
    if (g[v][k]) {
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
    g[u][v] = g[v][u] = 1;
  }
  for (int k = 1; k <= n; k++) {
    if (vis[k] == 0)
      dfs(k, 1);
  }
  cout << "YES";
  return 0;
}
