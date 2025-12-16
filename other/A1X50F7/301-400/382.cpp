#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;

int n, m;
int MOD = 1e9 + 7;

vector<int> g[100001];
vector<int> grev[100001];

bool vis[100001];
int price[100001];

ll cnt = 0;
vector<int> vtx, comp;

void dfs1(int v) {
  vis[v] = true;
  for (int k = 0; k < g[v].size(); k++) {
    int u = g[v][k];
    if (!vis[u]) {
      dfs1(u);
    }
  }
  vtx.pb(v);
}

ll sum;
int mn = INT_MAX;

void dfs2(int v) {
  vis[v] = true;
  comp.pb(v);
  mn = min(mn, price[v]);
  for (int k = 0; k < grev[v].size(); k++) {
    int u = grev[v][k];
    if (!vis[u]) {
      dfs2(u);
    }
  }
}

int main() {
  cin >> n;
  for (int k = 1; k <= n; k++) {
    cin >> price[k];
  }
  cin >> m;
  for (int k = 0; k < m; k++) {
    int v, u;
    cin >> v >> u;
    g[v].pb(u);
    grev[u].pb(v);
  }

  for (int k = 1; k <= n; k++) {
    if (!vis[k])
      dfs1(k);
  }

  memset(vis, false, sizeof(vis));

  ll var = 1;
  for (int k = vtx.size() - 1; k >= 0; k--) {
    if (!vis[vtx[k]]) {
      dfs2(vtx[k]);
      for (int k = 0; k < comp.size(); k++) {
        if (price[comp[k]] == mn) {
          cnt++;
        }
      }
      var *= cnt;
      var %= MOD;
      cnt = 0;
      comp.clear();
      sum += mn;
      mn = INT_MAX;
    }
  }
  cout << sum << " " << var % MOD;

  return 0;
}