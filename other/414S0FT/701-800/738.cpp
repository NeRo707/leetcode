#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, c;

  cin >> a >> b >> c;

  int diff = max(a, max(b, c)) - min(a, min(b, c));

  cout << diff;

  return 0;
}
