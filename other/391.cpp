#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    int min_val = INT_MAX;
    int max_val = INT_MIN;


    int i = 0, j = 0;
    while (i < n && j < m) {
        min_val = min(min_val, abs(a[i] - b[j]));
        if (a[i] < b[j]) i++;
        else j++;
    }

    max_val = max(abs(a[n - 1] - b[0]), abs(a[0] - b[m - 1]));

    cout << min_val << endl;
    cout << max_val << endl;

    return 0;
}

// >:C