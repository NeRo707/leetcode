#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  sort(arr.begin(), arr.end());

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] % 2 != 0) {
      cout << arr[i];
      return 0;
    }
  }

  cout << -1;

  return 0;
}