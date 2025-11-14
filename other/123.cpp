#include <bits/stdc++.h>
using namespace std;

string bankai(string s, int k) {
  if (k == -1) return "";
  return s[k] + bankai(s, k - 1);
}

int main() {
  string str;
  cin >> str;
  cout << bankai(str, str.size() - 1) << endl;
  return 0;
}