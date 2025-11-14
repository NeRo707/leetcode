#include <bits/stdc++.h>

using namespace std;

vector<set<int>> G(51);

int main() {
  int n, m, v;

  cin >> n >> m >> v;

  for (int k = 1; k <= m; k++) {
    int u, v;
    cin >> u >> v;
    G[u].insert(v);
    G[v].insert(u);
  }

  cout << G[v].size() << "\n";

  return 0;
}