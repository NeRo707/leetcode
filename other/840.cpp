#include <bits/stdc++.h>
using namespace std;

vector<int> ans;

void solve(string s, string fs, int cnt) {

  size_t pos = s.find(fs, 0);

  while (pos != string::npos) {
    cnt++;
    pos = s.find(fs, pos + 1);
  }

  ans.push_back(cnt);
}

int main() {

  string s;
  cin >> s;
  int q;
  cin >> q;

  while (q--) {
    string fs;
    cin >> fs;
    int cnt = 0;
    solve(s, fs, cnt);
  }

  for (int k : ans) {
    cout << k << endl;
  }

  return 0;
}
