#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, x, y;
  cin >> n >> m >> x >> y;
  int a[n+1][m+1] = {};
  
for (int dx = -1; dx <= 1; dx++) {
  for (int dy = -1; dy <= 1; dy++) {
    int nx = x + dx, ny = y + dy;
    if (nx >= 1 && nx <= n && ny >= 1 && ny <= m) {
      a[nx][ny] = 1;
    }
  }
}
  
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }


}