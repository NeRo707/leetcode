#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int k = 0; k < n; k++) {
    cin >> a[k];
  }

  int cnt = 0;
  int mx = INT_MIN;
  for (int k = 0; k < n; k++) {
    if(a[k] > mx){
      cnt++;
      mx = a[k];
    }
  }

  cout << cnt << endl;

  return 0;
}