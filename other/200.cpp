#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  string a, b;
  cin >> a >> b;

  if (a.size () > b.size ())
    {
      cout << ">";
      return 0;
    }
  else if (a.size () < b.size ())
    {
      cout << "<";
      return 0;
    }


  if (a > b)
    {
      cout << ">";
      return 0;
    }
  else if(a<b)
    {
      cout << "<";
      return 0;
    }
  cout << "=";


  return 0;
}
