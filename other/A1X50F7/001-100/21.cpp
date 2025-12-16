#include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> G[100001];
int timein[100001], timeout[100001];
bool used[100001];
long tin = 0, tout = 0;

void dfs(int v) {
  used[v] = true;

  timein[v] = ++tin;

  for (int u : G[v]) {
    if (!used[u]) {
      dfs(u);
    }
  }

  timeout[v] = ++tout;
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  for (int k = 1; k <= n - 1; k++) {
    int v, u;
    cin >> v >> u;
    G[v].pb(u);
    G[u].pb(v);
  }

  dfs(1);

  int q;
  cin >> q;
  while (q--) {
    int u, v;
    cin >> u >> v;
    bool z = ((timein[u] >= timein[v] && timeout[u] <= timeout[v]) ||
              (timein[v] >= timein[u] && timeout[v] <= timeout[u]));
    cout << (z ? "YES" : "NO") << '\n';
  }

  return 0;
}