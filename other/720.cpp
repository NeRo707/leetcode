#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long

int main() {
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  long long ans = max(a[0] * a[1] * a[2] * a[3], a[0] * a[1] * a[n - 2] * a[n - 1]);

  ans = max(ans, a[n - 4] * a[n - 3] * a[n - 2] * a[n - 1]);

  cout << ans << endl;
  return 0;
}
