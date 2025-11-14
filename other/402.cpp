#include <bits/stdc++.h>
using namespace std;

int a[100][100];

int main() {
  int n, p;
  cin >> n >> p;
  p--;

  int x1, x2, y1, y2, ans = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      char c;
      cin >> c;

      if (c == 'S') {
        x1 = i - p;
        x2 = i + p;
        y1 = j - p;
        y2 = j + p;

        x1 = max(x1, 0);
        x2 = max(x2, 0);
        y1 = max(y1, 0);
        y2 = max(y2, 0);

        for (int k = x1; k <= x2; k++) {
          for (int v = y1; v <= y2; v++) {
            a[k][v] = 1;
          }
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j])
        ans++;
    }
  }

  cout << (n * n) - ans;

  return 0;
}