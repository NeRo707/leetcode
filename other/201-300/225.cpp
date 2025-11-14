#include <bits/stdc++.h>

using namespace std;

int a[22][22], d[22][22];

int main(){

  int v = 0, n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
      cin >> a[i][j];

  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
      d[i][j] = max({d[i - 1][j - 1], d[i - 1][j], d[i - 1][j + 1]}) + a[i][j];

  for (int s = 0; s <= n; s++)
  {
    v = max(v, d[n][s]);
  }

  cout << v;

  return 0;
}