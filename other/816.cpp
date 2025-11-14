#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    for (int k = 0; k < n - 1; k++){
        if((a[k] % 2 == 1 && a[k + 1] % 2 == 1) && (abs(a[k + 1] - a[k]) == 2)){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}