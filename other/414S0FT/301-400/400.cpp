#include <bits/stdc++.h>

using namespace std;

int main() {

  string n;
  cin >> n;
  string t = n;
  reverse(n.begin(), n.end());

  if (n == t) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}