#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n+1], b[n+1], c[n+1];
  for(int i=1;i<=n;i++){
    cin>>a[i]>>b[i]>>c[i];
  }
  
  int dp[n+1];

  dp[1]=a[1];
  dp[2]=min({a[2] + dp[1], b[1]});
  dp[3]=min({a[3] + dp[2], b[2] + dp[1], c[1]});

  for(int i=4;i<=n;i++){
    dp[i]=min({a[i]+dp[i-1],b[i-1]+dp[i-2],c[i-2]+dp[i-3]});
  }

    cout<<dp[n];


    return 0;
}