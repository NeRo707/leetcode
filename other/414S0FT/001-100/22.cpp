#include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector<vector<int>> G;
vector<int> timein, timeout;
vector<bool> used;
int tin = 0, tout = 0;
void DFS(int v) {
  used[v] = true;
  tin++;
  timein[v] = tin;
  for (int u : G[v]) {
    if (!used[u]) {
      DFS(u);
    }
  }

  tout++;
  timeout[v] = tout;
}
int main() {
  int n, m;
  cin >> n >> m;
  G.resize(n + 1);
  
  for (int k = 1; k <= m; k++) {
    int v, u;
    cin >> v >> u;
    G[v].pb(u);
    G[u].pb(v);
  }
  
  used.resize(n + 1);
  timein.resize(n + 1);
  timeout.resize(n + 1);

  for (int i = 1; i <= n; i++) {
    sort(G[i].begin(), G[i].end());
  }

  int x;
  cin >> x;
  DFS(x);
  for (int k = 1; k <= n; k++) {
    cout << timein[k] << " ";
  }
  cout << endl;
  for (int k = 1; k <= n; k++) {
    cout << timeout[k] << " ";
  }
  return 0;
}