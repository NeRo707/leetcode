#include <bits/stdc++.h>
using namespace std;

int t[1000005];
int a[1000005];

void build(int v, int tl, int tr) {
  if (tl == tr) {
    t[v] = a[tl];
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
        if(new_val > 0){
         t[v] = 0;
    }else{
        t[v] = 1;
    }
  } else {
    int tm = (tl + tr) / 2;
    if (pos <= tm)
      update(v * 2, tl, tm, pos, new_val);
    else
      update(v * 2 + 1, tm + 1, tr, pos, new_val);
      
      
    t[v] = t[v * 2] + t[v * 2 + 1];
  }
}

int main() {
  int N, Q;
  cin >> N >> Q;
  for (int i = 1; i <= N; i++) {
    cin >> a[i];
    if(a[i]>0){
        a[i] = 0;
    }else if(a[i] == 0){
        a[i] = 1;
    }
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
      int l, r;
      cin >> l >> r;
      cout << sum(1, 1, N, l, r) << endl;
    }
  }
  return 0;
}
