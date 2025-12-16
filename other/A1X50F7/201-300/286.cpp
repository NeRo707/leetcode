#include <bits/stdc++.h>

using namespace std;

int parent[5001];
int ans[5001];

void make_set(int v) { parent[v] = v; }

int find_set(int v) {
  if (parent[v] == v) {
    return v;
  }
  return find_set(parent[v]);
}

void union_sets(int a, int b) {
  a = find_set(a);
  b = find_set(b);
  if (a != b) {
    parent[b] = a;
    return;
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= n; i++)
    make_set(i);

  while (m--) {
    int a, b;
    cin >> a >> b;
    union_sets(a, b);
  }

  set<int> s;
  for (int k = 1; k <= n; k++){
    s.insert(find_set(k));
  }

  int cnt = 0;
  for (int k = 1; k <= n; k++) {
    ans[find_set(k)]++;
    cnt = max(cnt, ans[find_set(k)]);
  }

  cout << s.size() << " " << cnt;

  return 0;
}