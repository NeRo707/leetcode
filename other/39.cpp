#include <bits/stdc++.h>
using namespace std;
map<int, int> freq;
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int mx = INT_MIN;
  int mn = INT_MAX;
  int mfq = 0;
  for (int k = 0; k < n; k++)
  {
    freq[a[k]]++;
    mn = min(mn, a[k]);
    mx = max(mx, a[k]);
  }

  int i;
  for (int k = 0; k < n; k++)
  {
    if (freq[a[k]] > mfq)
    {
      mfq = freq[a[k]];
      i = k;
    }
  }

  set<int> s;
  for (int k = i; k < n; k++)
  {
    if (freq[a[k]] == mfq)
    {
      s.insert(a[k]);
    }
  }

  for (auto k : s)
  {
    cout << k << " ";
  }

  cout << endl
       << mx - mn;

  return 0;
}
