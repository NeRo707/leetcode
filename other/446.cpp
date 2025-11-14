#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  int num = n * (n + 1) / 2;

  for (int i = 0; i < n - 1; ++i) {
    int x;
    cin >> x;
    num -= x;
  }

  cout << num << endl;
  return 0;
}