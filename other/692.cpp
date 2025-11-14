#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  ll n;
  ll a;
  ll t;
  cin >> n;
  while (n--) {
    cin >> t;
    long long i = 1;
    while (i * 2 <= t)
      i *= 2;
    if (i == t) {
      cout << i / 2 << " " << i * 2 << endl;
    } else {
      cout << i << " " << i * 2 << endl;
    }
  }
}