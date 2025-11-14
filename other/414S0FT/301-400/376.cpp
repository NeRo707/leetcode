#include <bits/stdc++.h>

using namespace std;

int parent[1005], siz[1005];

int find_set(int v) {
  if (v == parent[v]) {
    return v;
  }
  return parent[v] = find_set(parent[v]);
}

bool union_sets(int a, int b) {
  a = find_set(a);
  b = find_set(b);
  if (a != b) {
    if (siz[a] < siz[b]) {
      swap(a, b);
    }
    parent[b] = a;
    siz[a] += siz[b];
    siz[b] = 0;
    return true;
  }
  return false;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

  int n, m;
  cin >> n >> m;

  for (int k = 1; k <= n; k++) {
    parent[k] = k;
    siz[k] = 1;
  }

  set<pair<int, int>> ans;
  for (int k = 0; k < m; k++) {
    int u, v;
    cin >> u >> v;
    if (union_sets(u, v)) {
      ans.clear();
      for (int k = 1; k <= n; k++) {
        if (siz[k])
          ans.insert({siz[k], k});
      }
    }
    for (auto k : ans) {
      cout << k.first << " ";
    }
    cout << endl;
  }

  return 0;
}