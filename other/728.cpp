#include <bits/stdc++.h>
using namespace std;

int main()
{

  long long n, l = 0;
  cin >> n;

  long long a[n + 1], d[n + 1], b[n + 1], mx;

  a[0] = 0;

  for (int k = 1; k <= n; k++)
    cin >> a[k];

  d[0] = 0;
  d[1] = a[1];

  b[1] = a[1];
  b[2] = max(a[1] + a[2], a[2]);

  if (n == 2)
    cout << max({a[0], b[1], b[2]});
  else if (n == 1)
    cout << max(a[0], b[1]);
  else
  {
    d[2] = a[2];
    for (int k = 3; k <= n; k++)
    {
      d[k] = d[k - 3] + a[k];
      b[k] = max(b[k - 1], b[k - 2]) + a[k];
    }
    mx = d[n - ((n - 1) % 3)];
    for (int k = 2; k <= n; k++)
    {
      mx = max(d[n - (n - k) % 3] - d[k] + max(b[k], d[k]), mx);
    }
    cout << mx << ' ';
  }
  return 0;
}