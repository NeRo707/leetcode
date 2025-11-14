#include <bits/stdc++.h>

using namespace std;

vector<int> used(100001), d(100001, 1000000007);
vector<int> g[100001];

int main() {

  int n, m;
  cin >> n >> m;
  d[1] = 0;
  while (m--) {
    int w;
    cin >> w;
    if (w == 2) {
      int x, y;
      cin >> x >> y;
      g[x].push_back(y);
      if (d[x] != -1) {
        queue<int> q;
        q.push(x);
        while (!q.empty()) {
          int x = q.front();
          q.pop();
          for (int i = 0; i < g[x].size(); i++) {
            int u = g[x][i];
            if (d[u] > d[x] + 1) {
              d[u] = d[x] + 1;
              q.push(u);
            }
          }
        }
      }

    } else {
      int b;
      cin >> b;
      if (d[b] == 1000000007)
        cout << -1 << endl;
      else
        cout << d[b] << endl;
    }
  }

  return 0;
}