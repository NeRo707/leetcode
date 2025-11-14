#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin >> s;

  int n1 = 0, n2 = 0;
  char op = ' ';

  for (char c : s)
  {
    if (isdigit(c))
    {
      if (op == ' ')
      {
        n1 = n1 * 10 + (c - '0');
      }
      else
      {
        n2 = n2 * 10 + (c - '0');
      }
    }
    else if (c == '*' || c == '-' || c == '+')
    {
      op = c;
    }
  }

  switch (op)
  {
  case '*':
    cout << n1 * n2;
    break;
  case '-':
    cout << n1 - n2;
    break;
  case '+':
    cout << n1 + n2;
    break;
  }

  return 0;
}
