#include <bits/stdc++.h>

using namespace std;



int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, 0);
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    
    for(int i = 4; i <= n; i++){
        int mn = dp[i - 1];
        
        if(i % 2 == 0){
           mn = min(dp[i / 2], mn);
        }
        
        if(i % 3 == 0){
           mn = min(dp[i / 3], mn);
        }
        
        dp[i]= mn + 1;
    }

    cout<<dp[n]<<endl;
	
    vector <int> seq(n + 1, 0);
    int idx = 0;
    seq[idx++] = n;

    while (n > 1) {
        if (n % 2 == 0 && dp[n/2] == dp[n] - 1) {
            n /= 2;
        } else if (n % 3 == 0 && dp[n/3] == dp[n] - 1) {
            n /= 3;
        } else {
            n--;
        }
        seq[idx++] = n;
    }

    for (int i = idx-1; i >= 0; i--) {
        cout << seq[i] << " ";
    }cout<<endl;

    return 0;
}
