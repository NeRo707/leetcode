#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, cnt = 0;
  cin >> n;
  int a[n + 1][n + 1];
  
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      cin >> a[i][j];

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j > i || j == i) {
        cnt = cnt + a[i][j];
      }
    }
  }

  cout << cnt;
  return 0;
}