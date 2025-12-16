#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 10000001

long long dp[MAX];

void _() {
  dp[0] = 1;
  for (int k = 1; k < MAX; k++) {
    dp[k] = (dp[k - 1] * k) % MOD;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  _();

  int n;
  cin >> n;

  while (n--) {
    int x;
    cin >> x;
    cout << dp[x] << endl;
  }

  return 0;
}
