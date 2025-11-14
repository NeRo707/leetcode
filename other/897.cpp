#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  unordered_map<int, int> fq;

  for (int k = 0; k < n; k++) {
    int a;
    cin >> a;
    if (fq.find(a) == fq.end()) {
      fq[a] = k + 1;
    }
  }

  for (int k = 0; k < q; k++) {
    int x;
    cin >> x;
    if (fq[x] == 0) {
      cout << -1 << endl;
    } else {
      cout << fq[x] << endl;
    }
  }

  return 0;
}
