#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> dp(n+1, 0);

  dp[1] = 0;
  dp[2] = 1;
  dp[3] = 1;

  for (int k = 4; k <= n; k++) {
    int mn = dp[k - 1];
    int mn2 = dp[k / 2];
    int mn3 = dp[k / 3];

    if (k % 2 == 0) {
      mn = min(mn, mn2);
    }
    if (k % 3 == 0) {
      mn = min(mn, mn3);
    }

    dp[k] = mn + 1;
  }

  cout << dp[n] << endl;

  return 0;
}
