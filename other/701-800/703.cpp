#include <bits/stdc++.h>

using namespace std;

int a[1000001];
int t[4000001];

void build(int v, int tl, int tr) {
  if (tl == tr) {
    t[v] = a[tl];
  } else {
    int tm = (tl + tr) / 2;
    build(v * 2, tl, tm);
    build(v * 2 + 1, tm + 1, tr);
    t[v] = min(t[v * 2], t[v * 2 + 1]);
  }
}

int mn(int v, int tl, int tr, int l, int r) {

  if (l > r)
    return INT_MAX;

  if (l == tl && r == tr)
    return t[v];

  int tm = (tl + tr) / 2;

  int a = mn(v * 2, tl, tm, l, min(r, tm));
  int b = mn(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);

  return min(a, b);
}

int main() {

  int n, q;
  cin >> n >> q;

  for (int i = 1; i <= n; i++)
    cin >> a[i];

  build(1, 1, n);

  while (q--) {
    int l, r;
    cin >> l >> r;

    cout << mn(1, 1, n, l, r) << endl;
  }

  return 0;
}
