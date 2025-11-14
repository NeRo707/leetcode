#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n; cin>>n; n=(n+1)/2;
    ll dp[n+1][n+1] = {};
    
    for(int k=1; k<=n; k++){
        dp[k][1]=dp[1][k]=1;
    }
    
    for(int i=2; i<=n; i++){
        for(int j=2; j<=n; j++){
            dp[i][j]=dp[i][j-1]+dp[i-1][j];
        }
    }

    cout<<dp[n][n];
    
    return 0;
}