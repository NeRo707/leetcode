#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  vector<int> dp(n + 1);

  // dp[0] = dp[1] = dp[2] = dp[3] = dp[4] = 0;

  for (int k = 1; k <= n; k++)
    cin >> a[k];

  for (int k = 5; k <= n; k++) {
    int cnt = a[k] + a[k - 1] + a[k - 2] + a[k - 3] + a[k - 4];

    dp[k] = max(dp[k - 1], (dp[k - 5] + cnt));
  }

  cout << dp[n] * 10;

  return 0;
}