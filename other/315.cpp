#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int dp[n + 1];
  
  dp[0] = 0;
  dp[1] = 2;
  dp[2] = 4;
  dp[3] = 7;
  
  for (int k = 4; k <= n; k++) {
    dp[k] = dp[k - 1] + dp[k - 2] + dp[k - 3];
  }
  cout << dp[n];

  return 0;
}