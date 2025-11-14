#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, d, a, b;
  cin >> n >> m >> d >> a >> b;

  int dima = n + (d * a);
  int alex = m + (d * b);

  if (dima > alex) {
    cout << "Dima";
  } else if (alex > dima) {
    cout << "Alex";
  } else {
    cout << "Draw";
  }

  return 0;
}