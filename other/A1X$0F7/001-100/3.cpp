#include <bits/stdc++.h>
using namespace std;
unsigned long long mulmod(unsigned long long a, unsigned long long b,
                          unsigned long long m) {
  unsigned long long x = 0, y = a % m;

  while (b >= 1) {
    if (b % 2 == 1) {
      x = (x + y) % m;
    }
    y = (y * 2) % m;
    b /= 2;
  }
  return x % m;
}
int main() {
  unsigned long long a, b, m;

  cin >> a >> b >> m;

  cout << mulmod(a, b, m);

  return 0;
}