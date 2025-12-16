#include <bits/stdc++.h>
using namespace std;
#define cube(k) k * k * k

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;

  int dp[n + 1] = {0}; 
  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 2;
  
  int cubes[1000] = {0}; 
  cubes[0] = 0;

  for (int k = 1; cube(k) <= n; k++) cubes[k] = cube(k);

  for (int i = 1; i <= n; i++) {
    dp[i] = dp[i - 1] + 1;
    for (int k = 2; cube(k) <= i; k++) {
      dp[i] = min(dp[i], dp[i - cubes[k]] + 1);
    }
  }

  cout << dp[n];
  return 0;
}
