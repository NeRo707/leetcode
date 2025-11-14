#include <bits/stdc++.h>
using namespace std;

const int MAX = 10000;
bool used[MAX];
int dis[MAX];

int transform(int num, int type) {
    if (type == 1) return num - 1;
    if (type == 2) return 1000 + num;
    if (type == 3) return num / 100 % 10 * 1000 + num % 100 * 10 + num / 1000;
    if (type == 4) return num % 10 * 1000 + num / 10;
    return -1;
}

int main() {
    int n, m;
    cin >> n >> m;

    if (n == m) {
      cout << 0;
      return 0;
    }

    used[n] = true;
    queue<int> q;
    q.push(n);

    while (!q.empty()) {
      int tmp = q.front();
      q.pop();

      for (int i = 1; i <= 4; ++i) {
        int nextNum = transform(tmp, i);

        if (nextNum >= 0 && nextNum < MAX && !used[nextNum]) {
          q.push(nextNum);
          dis[nextNum] = dis[tmp] + 1;

          if (nextNum == m) {
            cout << dis[nextNum];
            return 0;
          }

          used[nextNum] = true;
        }
      }
    }

    cout << 0;
    return 0;
}
