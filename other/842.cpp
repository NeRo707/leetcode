#include <bits/stdc++.h>
#define ll long long
using namespace std;

map<int, ll> mp;

ll tree(int n) {
  if (mp[n]) {
    return mp[n];
  }

  ll s = 0;
  for (int i = 0; i < n; i++) {
    ll a = tree(i);
    ll b = tree(n - i - 1);
    s += a * b;
  }

  mp[n] = s;

  return s;
}

int main() {
  int n;
  cin >> n;

  mp[0] = mp[1] = 1;

  cout << tree(n);

  return 0;
}
