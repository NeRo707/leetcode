#include <bits/stdc++.h>

using namespace std;

int main() {
  int w, h;
  cin >> w >> h;
  int min_dim = min(w, h);
  int maxsquare = min_dim * min_dim;
  cout << maxsquare << endl;
  return 0;
}
