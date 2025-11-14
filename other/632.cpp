#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, Q;
  cin >> n >> Q;

  priority_queue<int, vector<int>, greater<int>> que;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    que.push(x);
  }

  string command;
  int x;
  while (Q--) {
    cin >> command;
    if (command == "insert") {
      cin >> x;
      que.push(x);
    } else if (command == "delete") {
      string min;
      cin >> min;
      if (!que.empty()) {
        que.pop();
      }
    } else if (command == "min") {
      if (!que.empty()) {
        cout << que.top() << endl;
      } else {
        cout << "-1" << endl;
      }
    }
  }

  return 0;
}
