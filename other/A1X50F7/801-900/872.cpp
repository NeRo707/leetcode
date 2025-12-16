#include <bits/stdc++.h>
#define int long long
using namespace std;

int t[10000005];
int a[10000005];

void build(int v, int tl, int tr) {
  if (tl == tr) {
    t[v] = a[tl] % 2 == 0;
  } else {
    int tm = (tl + tr) / 2;
    build(v * 2, tl, tm);
    build(v * 2 + 1, tm + 1, tr);

    t[v] = t[v * 2] + t[v * 2 + 1];
  }
}

int sum(int v, int tl, int tr, int l, int r) {
  if (l > r)
    return 0;
  if (l == tl && r == tr) {
    return t[v];
  }
  int tm = (tl + tr) / 2;
  return sum(v * 2, tl, tm, l, min(r, tm)) +
         sum(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
}

void update(int v, int tl, int tr, int pos, int new_val) {
  if (tl == tr) {
    t[v] = new_val % 2 == 0;
  } else {
    int tm = (tl + tr) / 2;
    if (pos <= tm)
      update(v * 2, tl, tm, pos, new_val);
    else
      update(v * 2 + 1, tm + 1, tr, pos, new_val);

    t[v] = t[v * 2] + t[v * 2 + 1];
  }
}

int32_t main() {
  int N, Q;
  cin >> N >> Q;
  for (int i = 1; i <= N; i++) {
    cin >> a[i];
  }
  build(1, 1, N);
  while (Q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int k, x;
      cin >> k >> x;
      update(1, 1, N, k, x);
    } else if (type == 2) {
      string op;
      int l, r;
      cin >> op >> l >> r;
      if (op == "EVEN") {
        cout << sum(1, 1, N, l, r) << endl;
      } else {
        cout << r - l + 1 - sum(1, 1, N, l, r) << endl;
      }
    }
  }
  return 0;
}
