#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100001], radj[100001];
vector<bool> used;
vector<int> order, comp;
vector<int> lgscc;

void dfs1(int v) {
  used[v] = true;

  for (int u : adj[v])
    if (!used[u])
      dfs1(u);

  order.push_back(v);
}

void dfs2(int v) {
  used[v] = true;
  comp.push_back(v);

  for (int u : radj[v])
    if (!used[u])
      dfs2(u);
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

  used.assign(n + 1, false);

  for (int i = 1; i <= n; i++)
    if (!used[i])
      dfs1(i);

  used.assign(n + 1, false);
  reverse(order.begin(), order.end());

  for (int v : order)
    if (!used[v]) {
      dfs2(v);
      if (comp.size() > lgscc.size()) {
        lgscc = comp;
      } else if (comp.size() == lgscc.size() and comp[0] < lgscc[0]) {
        lgscc = comp;
      }
      comp.clear();
    }

  cout << lgscc.size() << endl;
  sort(lgscc.begin(), lgscc.end());
  for (int v : lgscc) {
    cout << v << " ";
  }
  cout << endl;

  return 0;
}
