#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int n = sqrt(s.length());
  int sum = 0;

  for (int i = 0; i < n; ++i) {
    sum += s[i * (n + 1)] - '0';
  }
  cout << sum << endl;

  return 0;
}
