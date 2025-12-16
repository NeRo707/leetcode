#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> g[100005], sub(100005), a(100005);

void dfs(ll v, ll p) {
  sub[v] = a[v];
  for (auto u : g[v]) {

    if (u == p)
      continue;

    dfs(u, v);

    sub[v] += sub[u];
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n;
  cin >> n;
  ll total = 0;
  for (ll i = 1; i <= n; i++) {
    cin >> a[i];
    total += a[i];
  }

  for (ll i = 1; i < n; i++) {
    ll u, v;
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  dfs(1, 0);
  ll ans = 1e18;

  for (ll i = 1; i <= n; i++) {
    ans = min(ans, abs(total - 2 * sub[i]));
  }
  cout << ans << endl;
  return 0;
}
