#include <bits/stdc++.h>
#define int long long
using namespace std;

int t[10000005];

void build(int a[], int v, int tl, int tr) {
  if (tl == tr) {
    t[v] = a[tl];
  } else {
    int tm = (tl + tr) / 2;
    build(a, v * 2, tl, tm);
    build(a, v * 2 + 1, tm + 1, tr);
    t[v] = t[v * 2] + t[v * 2 + 1];
  }
}

int sum(int v, int tl, int tr, int l, int r) {
  if (l > r)
    return 0;

  if (l == tl && r == tr)
    return t[v];

  int tm = (tl + tr) / 2;

  int a = 0, b = 0;

  if (l <= tm) {
    if (r <= tm) {
      a = sum(v * 2, tl, tm, l, r);
    } else {
      a = sum(v * 2, tl, tm, l, tm);
    }
  }

  if (r > tm) {
    if (l > tm) {
      b = sum(v * 2 + 1, tm + 1, tr, l, r);
    } else {
      b = sum(v * 2 + 1, tm + 1, tr, tm + 1, r);
    }
  }

  return a + b;
}

int32_t main() {

  int n, q;
  cin >> n >> q;
  int a[n + 1];
  for (int i = 1; i <= n; i++)
    cin >> a[i];

  build(a, 1, 1, n);

  while (q--) {
    int l, r;
    cin >> l >> r;

    cout << sum(1, 1, n, l, r) << endl;
  }

  return 0;
}
