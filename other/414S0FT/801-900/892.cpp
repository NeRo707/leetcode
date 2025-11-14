#include <bits/stdc++.h>
using namespace std;

#define MAXN 100005
#define INF 1000000000
int a[MAXN];
pair<int, int> t[4 * MAXN];

void build(int v, int tl, int tr) {
  if (tl == tr) {
    t[v] = {a[tl], a[tl]};
  } else {
    int tm = (tl + tr) / 2;
    build(v * 2, tl, tm);
    build(v * 2 + 1, tm + 1, tr);
    t[v].first = min(t[v * 2].first, t[v * 2 + 1].first);
    t[v].second = max(t[v * 2].second, t[v * 2 + 1].second);
  }
}

void update(int v, int tl, int tr, int pos, int new_val) {
  if (tl == tr) {
    t[v] = {new_val, new_val};
  } else {
    int tm = (tl + tr) / 2;
    if (pos <= tm)
      update(v * 2, tl, tm, pos, new_val);
    else
      update(v * 2 + 1, tm + 1, tr, pos, new_val);
    t[v].first = min(t[v * 2].first, t[v * 2 + 1].first);
    t[v].second = max(t[v * 2].second, t[v * 2 + 1].second);
  }
}

pair<int, int> query(int v, int tl, int tr, int l, int r) {
  if (l > r)
    return {INF, -INF};
  if (l == tl && r == tr)
    return t[v];
  int tm = (tl + tr) / 2;
  pair<int, int> left = query(v * 2, tl, tm, l, min(r, tm));
  pair<int, int> right = query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
  return {min(left.first, right.first), max(left.second, right.second)};
}

int main() {
  int N, Q;
  cin >> N >> Q;

  for (int i = 1; i <= N; ++i) {
    cin >> a[i];
  }

  build(1, 1, N);

  for (int i = 0; i < Q; ++i) {
    int type;
    cin >> type;
    if (type == 1) {
      int k, x;
      cin >> k >> x;
      update(1, 1, N, k, x);
    } else if (type == 2) {
      int l, r;
      cin >> l >> r;
      pair<int, int> res = query(1, 1, N, l, r);
      cout << res.second - res.first << endl;
    }
  }

  return 0;
}
