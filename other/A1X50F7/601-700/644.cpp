#include <bits/stdc++.h>
using namespace std;

vector<int> make_lps(string pattern) {
  int n = pattern.length();
  vector<int> lps(n);
  int len = 0;
  int k = 1;

  while (k < n) {
    if (pattern[k] == pattern[len]) {
      len++;
      lps[k] = len;
      k++;
    } else {
      if (len != 0) {
        len = lps[len - 1];
      } else {
        lps[k] = 0;
        k++;
      }
    }
  }

  return lps;
}

int findMaxPrefixLen(string a, string b) {
  string pattern = b + "$" + a;
  vector<int> lps = make_lps(pattern);
  int n = a.length();
  int m = b.length();
  int maxLen = 0;
  // cout << pattern << endl;
  // for(int k : lps){
  //   cout<<k<<" ";
  // }
  //cout << endl;

  for (int i = m + 1; i < m + n + 1; i++) {
    maxLen = max(maxLen, lps[i]);
  }

  return maxLen;
}

int main() {
  string a, b;
  cin >> a >> b;

  int d = max(findMaxPrefixLen(a, b), findMaxPrefixLen(b, a));
  cout << d << endl;

  return 0;
}