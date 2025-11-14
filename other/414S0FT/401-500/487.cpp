#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int cnt1 = 1, cnt2 = 1;

  for (int k = 1; k < n; k++)
  {
    if (a[k - 1] < a[k])
    {
      cnt1++;
    }
    if (a[k - 1] > a[k])
    {
      cnt2++;
    }
  }

  if (cnt1 == n and cnt2 != n)
  {
    cout << "YES" << endl;
    return 0;
  }
  else if (cnt1 != n and cnt2 == n)
  {
    cout << "YES" << endl;
    return 0;
  }
  else if (cnt1 == n and cnt2 == n)
  {
    cout << "YES" << endl;
    return 0;
  }
  else
  {
    cout << "NO" << endl;
    return 0;
  }
  return 0;
}