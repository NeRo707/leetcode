#include <bits/stdc++.h>

using namespace std;

int loflsis(int a[], int n){
    
    vector<int> dp(n,0);
        
        dp[0]=1;
        int ans=1;
        
    for(int i = 1; i < n; i++){
        for(int j = i - 1; j >= 0;j--){
            if(a[j] < a[i] && dp[i] < dp[j]){
                dp[i] = dp[j];
            }
        }
            dp[i]++;
            ans = max(ans, dp[i]);
    }
        return ans;
}

int main() {
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<loflsis(a, n)<<endl;

    return 0;
}