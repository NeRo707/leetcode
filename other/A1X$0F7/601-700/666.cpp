#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector <int> a(N + 1, 0);
    for (int i = 1; i <= N; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector <int> dp(N + 1, 0);
    dp[1] = 0;
    dp[2] = a[2] - a[1];
    dp[3] = dp[2] + a[3] - a[2];
    
    for (int i = 4; i <= N; i++){
        dp[i] = min(dp[i - 1], dp[i - 2]) + a[i] - a[i - 1];;
    }

    cout << dp[N];
    return 0;
}