#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int mn = INT_MAX;
  int K;
  for (int k = 0; k < n; k++) {
    int f;
    cin >> f;
    if (f < mn) {
      mn = f;
      K = k;
    }
  }
  cout << mn << " " << K << endl;

  return 0;
}