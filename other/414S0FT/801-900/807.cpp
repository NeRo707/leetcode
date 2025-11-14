#include <bits/stdc++.h>

using namespace std;

int main() {
  string str;
  cin>>str;
  int sum = 0, k = 0;
  while (k < str.length()) {
    if (str[k] == '0' and str[k + 1] == '0') {
      sum++;
      k += 2;
    } else {
      sum++;
      k++;
    }
  }
  cout << sum;

  return 0;
}