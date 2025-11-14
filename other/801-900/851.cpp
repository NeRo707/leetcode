#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int mindivs = INT_MAX;
  int res = -1;

  for (int num : arr) {
    int cnt = 0;
    for (int k = 1; k <= sqrt(num); k++) {
      if (num % k == 0) {
        if (num / k == k) {
          cnt++;
        } else {
          cnt += 2;
        }
      }
    }
    if (cnt < mindivs) {
      mindivs = cnt;
      res = num;
    }
  }

  cout << res << endl;

  return 0;
}