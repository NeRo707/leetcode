#include <bits/stdc++.h>
#define int long long
using namespace std;

int bit[100000005];
int n;

void update(int k, int val) {
  while(k <= n){
    bit[k] += val;
    k += k & -k;
  }
}

int sum(int k) {
  int sum = 0;
  while(k > 0){
    sum += bit[k];
    k -= k & -k;
  }
  return sum;
}

int sum(int l, int r) { return sum(r) - sum(l - 1); }

int32_t main() {
  int Q;
  cin >> n >> Q;
  int a[n + 1];
  
  for (int k = 1; k <= n; k++) {
    cin >> a[k];
    update(k, a[k]);
  }

  while (Q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int k, x;
      cin >> k >> x;
      int diff = x - a[k];
      a[k] = x;
      update(k, diff);
    } else if (type == 2) {
      int l, r;
      cin >> l >> r;
      cout << sum(l, r) << endl;
    }
  }

  return 0;
}