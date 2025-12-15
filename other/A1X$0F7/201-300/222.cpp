#include <bits/stdc++.h>
using namespace std;

bool vis[8][8];
int cnt = 0;
int m[8][8] = {
    {1, 1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1, 1, 1},
};

void dfs(int x, int y) {

  if (x < 0 || x > 7 || y < 0 || y > 7 || vis[x][y] || m[x][y] != 1)
    return;

  vis[x][y] = true;
  cnt++;

  if (m[x + 1][y + 1] == 1 and !vis[x + 1][y + 1])
    dfs(x + 1, y + 1);

  if (m[x + 1][y - 1] == 1 and !vis[x + 1][y - 1])
    dfs(x + 1, y - 1);

  if (m[x - 1][y + 1] == 1 and !vis[x - 1][y + 1])
    dfs(x - 1, y + 1);

  if (m[x - 1][y - 1] == 1 and !vis[x - 1][y - 1])
    dfs(x - 1, y - 1);
}

int main() {
  string a, h;

  cin >> a >> h;

  transform(a.begin(), a.end(), a.begin(), ::tolower);
  transform(h.begin(), h.end(), h.begin(), ::tolower);

  int c1 = a[0] - 'a';
  int c11 = a[1] - '1';

  int c2 = h[0] - 'a';
  int c22 = h[1] - '1';

  m[c2][c22] = -1;

  dfs(c1, c11);

  cout << cnt;

  return 0;
}
