#include <bits/stdc++.h>

using namespace std;

int barkali(string n, int k) {
  if (k == n.length()) return 0;
  return barkali(n, k + 1) + (n[k] - '0');
}

int main() {
  string n;
  cin >> n;
  cout << barkali(n, 0) << endl;
  return 0;
}