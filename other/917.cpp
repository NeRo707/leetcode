#include <bits/stdc++.h>

using namespace std;

vector<int> G[51];
int color[51];
bool vis[51];

void colorize(int v, int c) {
  vis[v] = true;
  color[v] = c;
  for (int i = 0; i < G[v].size(); i++) {
    if (!vis[G[v][i]]) {
      if (color[v] == 1) {
        colorize(G[v][i], 2);
      } else {
        colorize(G[v][i], 1);
      }
    }
  }
}

int main() {
  int n, m;

  cin >> n >> m;

  for (int i = 1; i <= m; i++) {
    int u, v;
    cin >> u >> v;
    G[u].push_back(v);
    G[v].push_back(u);
  }

  colorize(1, 1);

  for (int v = 1; v <= n; v++) {
    for (int k = 0; k < G[v].size(); k++) {
      int u = G[v][k];
      if (color[v] == color[u]) {
        cout << "NO";
        return 0;
      }
    }
  }

  cout << "YES";
  return 0;
}