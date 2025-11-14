#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, a, b, t1, t2;
  cin >> n >> a >> b >> t1 >> t2;
  long long k = min(abs(a - b) - 1, n - max(a, b) + min(a, b) - 1);

  long long r = min(t1 * k, t2 * k), l = 0;
  while (l < r) {
    long long mid = (l + r) / 2;
    if ((mid / t1) + (mid / t2) < k)
      l = mid + 1;
    else
      r = mid;
  }
  cout << r;

  return 0;
}