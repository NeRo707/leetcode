#include <bits/stdc++.h>
using namespace std;

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int a, b;
  char k;
  while (cin >> a >> k >> b) {
    cout << max(0, a - b) << endl;
  }

  return 0;
}
