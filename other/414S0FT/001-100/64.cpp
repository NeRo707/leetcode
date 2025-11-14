#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int count = 0;
  for (char c : s) {
    if (c == '(') {
      count++;
    }
    else if (c == ')') {
      count--;
      if (count < 0) {
        cout << "NO" << endl;
        return 0;
      }
    }
  }
  if (count == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
