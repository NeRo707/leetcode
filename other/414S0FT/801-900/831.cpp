#include <bits/stdc++.h>

using namespace std;

int main() {

  int x, y, n;

  cin >> x >> y >> n;

  int cnt = 0;

  while (n > 0) {
    if (n >= 3 && y < 3 * x) {
      cnt += y;
      n -= 3;
    } else {
      cnt += x;
      n -= 1;
    }
  }

  cout << cnt;

  return 0;
}