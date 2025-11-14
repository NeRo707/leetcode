#include <bits/stdc++.h>
using namespace std;


int g[21][21] = {};
int dis[21][21] = {};

bool used[21][21];

int n, m, x, y, x2, y2;

void bfs() {

  used[x][y] = true;
  
  queue<pair<int, int>> q;

  q.push({x, y});

  while (!q.empty()) {
    int t1 = q.front().first;
    int t2 = q.front().second;

    q.pop();
    used[t1][t2] = true;
    if (t1 + 2 <= n and t2 + 1 <= m and !used[t1 + 2][t2 + 1]) {
      q.push({t1 + 2, t2 + 1});
      dis[t1 + 2][t2 + 1] = dis[t1][t2] + 1;
    }
    if (t1 + 2 <= n and t2 - 1 >= 1 and !used[t1 + 2][t2 - 1]) {
      q.push({t1 + 2, t2 - 1});
      dis[t1 + 2][t2 - 1] = dis[t1][t2] + 1;
    }
    if (t1 + 1 <= n and t2 + 2 <= m and !used[t1 + 1][t2 + 2]) {
      q.push({t1 + 1, t2 + 2});
      dis[t1 + 1][t2 + 2] = dis[t1][t2] + 1;
    }
    if (t1 - 1 >= 1 and t2 + 2 <= m and !used[t1 - 1][t2 + 2]) {
      q.push({t1 - 1, t2 + 2});
      dis[t1 - 1][t2 + 2] = dis[t1][t2] + 1;
    }
    if (t1 - 2 >= 1 and t2 + 1 <= m and !used[t1 - 2][t2 + 1]) {
      q.push({t1 - 2, t2 + 1});
      dis[t1 - 2][t2 + 1] = dis[t1][t2] + 1;
    }
    if (t1 - 2 >= 1 and t2 - 1 >= 1 and !used[t1 - 2][t2 - 1]) {
      q.push({t1 - 2, t2 - 1});
      dis[t1 - 2][t2 - 1] = dis[t1][t2] + 1;
    }
    if (t1 + 1 <= n and t2 - 2 >= 1 and !used[t1 + 1][t2 - 2]) {
      q.push({t1 + 1, t2 - 2});
      dis[t1 + 1][t2 - 2] = dis[t1][t2] + 1;
    }
    if (t1 - 1 >= 1 and t2 - 2 >= 1 and !used[t1 - 1][t2 - 2]) {
      q.push({t1 - 1, t2 - 2});
      dis[t1 - 1][t2 - 2] = dis[t1][t2] + 1;
    }
  }
}
int main() {
  cin >> n >> m >> x >> y >> x2 >> y2;

  if (x == x2 and y == y2) {
    cout << 0;
    return 0;
  }

  bfs();

  if (dis[x2][y2] == 0) {
    cout << -1;
  } else {
    cout << dis[x2][y2];
  }

  return 0;
}