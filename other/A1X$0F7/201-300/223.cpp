#include <bits/stdc++.h>
using namespace std;

bool vis[8][8];
long long cnt = 0;
long long m[8][8];
const int N = 8;

void rotateMatrix(long long matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N / 2; ++j) {
            swap(matrix[i][j], matrix[i][N - 1 - j]);
        }
    }
}

void dfs(int x, int y) {
  
  if (x < 0 || x > 7 || y < 0 || y > 7 || vis[x][y] || m[x][y] == 0)
    return;

  cnt += m[x][y];
  vis[x][y] = true;

  if (m[x + 1][y + 1] > 0 and !vis[x + 1][y + 1])
    dfs(x + 1, y + 1);

  if (m[x + 1][y - 1] > 0 and !vis[x + 1][y - 1])
    dfs(x + 1, y - 1);

  if (m[x - 1][y + 1] > 0 and !vis[x - 1][y + 1])
    dfs(x - 1, y + 1);

  if (m[x - 1][y - 1] > 0 and !vis[x - 1][y - 1])
    dfs(x - 1, y - 1);
}


int main() {
  string a, h, c;

  cin >> a >> h >> c;

  for (int k = 0; k < 8; k++) {
    for (int l = 0; l < 8; l++) {
      cin >> m[k][l];
    }
  }

  rotateMatrix(m);

  transform(a.begin(), a.end(), a.begin(), ::tolower);
  transform(h.begin(), h.end(), h.begin(), ::tolower);
  transform(c.begin(), c.end(), c.begin(), ::tolower);

  int c1 = a[0] - 'a';
  int c11 = a[1] - '1';

  int c2 = h[0] - 'a';
  int c22 = h[1] - '1';

  int c3 = c[0] - 'a';
  int c33 = c[1] - '1';

  m[c2][c22] = 0;
  m[c3][c33] = 0;

  dfs(c1, c11);

  cout << cnt << endl;

  return 0;
}
