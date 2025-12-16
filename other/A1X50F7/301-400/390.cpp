#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int sum = 0;
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }

  if (sum < n) {
    cout << "defective" << endl;
  } else if (sum == n) {
    cout << "none" << endl;
  } else {
    cout << "excessive" << endl;
  }

  return 0;
}