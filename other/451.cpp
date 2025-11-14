#include <bits/stdc++.h>
using namespace std;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, t;
  cin >> n >> t;

  deque<int> q;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    q.push_back(x);
  }

  while (t--) {
    string s;
    cin >> s;

    if (s == "print") {
      for (int i : q)
        cout << i << ' ';
      cout << '\n';
    } else if (s == "push") {
      string x;
      cin >> x;
      int y;
      cin >> y;
      if (x == "back")
        q.push_back(y);
      else
        q.push_front(y);
    } else {
      string k;
      cin >> k;
      if (k == "back")
        q.pop_back();
      else
        q.pop_front();
    }
  }

  return 0;
}