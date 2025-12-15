#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int imn = min_element(a.begin(), a.end()) - a.begin();
  int imx = max_element(a.begin(), a.end()) - a.begin();

  if (imn == 0 && imx == n - 1) {
    for (int k = 0; k < n; k++) {
      cout << a[k] << " ";
    }
  } else {
    swap(a[imn], a[0]);

    imx = max_element(a.begin(), a.end()) - a.begin();

    swap(a[imx], a[n - 1]);

    for (int k : a) {
      cout << k << " ";
    }
  }

  return 0;
}
