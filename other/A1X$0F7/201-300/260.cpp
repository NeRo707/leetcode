#include <bits/stdc++.h>

using namespace std;

int main() {

  int n;
  cin >> n;
  int g[n + 1][n + 1] = {};

  int a = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> g[i][j];
      if(g[i][j] == 1 and i == j) a=1;
    }
  }

  cout<<(a?"YES":"NO")<<endl;

  return 0;
}