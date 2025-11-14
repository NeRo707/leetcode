#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n, m, t;
  cin >> n >> m >> t;
  int arr[n];

  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr, arr + n);

  if (m > n)
  {
    cout << "NO";
    return 0;
  }

  if (m == 1)
  {
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == t)
      {
        cout << "YES";
        return 0;
      }
    }
    cout << "NO";
    return 0;
  }

  if (m == 2)
  {
    for (int i = 0; i < n - 1; i++)
    {
      int l = i + 1, r = n - 1, x = t - arr[i];
      int mid;
      while (l <= r)
      {
        mid = (r + l) / 2;
        if (arr[mid] == x)
        {
          cout << "YES";
          return 0;
        }
        else if (arr[mid] < x)
        {
          l = mid + 1;
        }
        else
        {
          r = mid - 1;
        }
      }
    }
    cout << "NO";
  }

  if (m == 3)
  {
    for (int k = 0; k < n - 2; k++)
    {
      int y = t - arr[k];
      for (int i = k + 1; i < n; i++)
      {
        int x = y - arr[i];
        int l = i + 1, r = n - 1, mid;
        while (l <= r)
        {
          mid = (r + l) / 2;
          if (arr[mid] == x)
          {
            cout << "YES";
            return 0;
          }
          else if (arr[mid] < x)
          {
            l = mid + 1;
          }
          else
          {
            r = mid - 1;
          }
        }
      }
    }
    cout << "NO";
  }

  return 0;
}