#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
  string n;
  cin >> n;
  bool replaced = false;
  for (char& c : n) {
    if (c != '9' && !replaced) {
      c = '9';
      replaced = true;
    }
  }
  cout << n << endl;
  return 0;
}
