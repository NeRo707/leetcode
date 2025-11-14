#include <bits/stdc++.h>

using namespace std;

int main() {
  int x, m, n;
  cin >> m >> n;

  x = n - m;

  if (m >= n) {

    cout << "Impossible";

  } else {

    cout << x;
  }
  return 0;
}