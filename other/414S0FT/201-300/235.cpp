#include <bits/stdc++.h>

using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    
    long long dp[x+1][y+1] = {};
    dp[0][0]=0;

    for(int k=2;k<=x;k+=2){
        dp[k][0]=1;
    }
    
    for(int k=2;k<=y;k+=2){
        dp[0][k]=1;
    }

    for(int i=2;i<=x;i+=2){
        for(int j=2;j<=y;j+=2){
            dp[i][j]=dp[i-2][j]+dp[i][j-2];
        }
    }
    cout<<dp[x][y]<<endl;

    return 0;
}