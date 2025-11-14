#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main() {
  int n;
  cin >> n;

  switch (n) {
  case 1: {
    cout << 1;
    return 0;
  }
  case 2: {
    cout << 2;
    return 0;
  }
  case 3: {
    cout << 4;
    return 0;
  }
  case 4: {
    cout << 8;
    return 0;
  }
  case 5: {
    cout << 16;
    return 0;
  }
  case 6: {
    cout << 32;
    return 0;
  }
  }

  long long dp[n + 1];

  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;
  dp[4] = 8;
  dp[5] = 16;
  dp[6] = 32;

  for (int k = 7; k <= n; k++) {
    dp[k] = (dp[k - 1] + dp[k - 2] + dp[k - 3] + dp[k - 4] + dp[k - 5] + dp[k - 6]) % mod;
  }

  cout << dp[n] % mod;

  return 0;
}