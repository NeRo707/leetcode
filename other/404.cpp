#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, k;
  cin >> N >> k;

  if ((N % 4 == 0 && k == 1) || (N % 4 != 0 && k == 2)) {
    cout << "Giviko" << endl;
  } else {
    cout << "Niniko" << endl;
  }

  return 0;
}
