#include <bits/stdc++.h>
using namespace std;

//vector<bool> vis(21, false);
//vector<int> adj[21];

int main() {
  int n, m;
  cin >> n >> m;
  for (int k = 1; k <= m; k++) {
    int u, v;
    cin >> u >> v;
    //adj[u].push_back(v);
    //adj[v].push_back(u);
  }

  cout << m - n + 1;

  return 0;
}