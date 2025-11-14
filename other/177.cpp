#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin>>n>>x;
    int d[n+1];
    d[1]=1;
    d[2]=2;
    d[x]=0;
    if(x==1){
        d[2]=1;
    }
    for(int k = 3; k <= n; k++){
        d[k]=d[k-2]+d[k-1];
        d[x]=0;
    }
    cout<<d[n];
    return 0;
}