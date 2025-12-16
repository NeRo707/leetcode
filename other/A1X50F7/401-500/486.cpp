#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bool increasing = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[i - 1])
        {
            increasing = false;
            break;
        }
    }

    if (increasing)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
