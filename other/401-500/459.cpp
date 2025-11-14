#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin>>s;

  int mx = 0;
  int tmpmx = 0;
  bool start = false;

  for (int k = 0; k < s.size(); k++)
  {
    if (s[k] == '1')
    {
      if (start)
      {
        mx = max(mx, tmpmx);
        tmpmx = 0;
      }
      else
      {
        start = true;
      }
    }
    else if (start)
    {
      tmpmx++;
    }
  }

  cout << mx << endl;

  return 0;
}
