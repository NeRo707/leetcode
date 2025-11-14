#include <bits/stdc++.h>
using namespace std;
int main() {
    unsigned long long n;
    cin>>n;
    unsigned long long d[n];
    if(n == 1){
        cout<<1;
        return 0;
    }else if(n == 0){
        cout<<0;
        return 0;
    }
    for(int k = 1; k <= n; k++){
        d[n-k] = n-k;
    }
    for(int k = 3; k < n; k++){
        d[k] = d[k-1] + d[k-2];
    }
    cout<<d[n-1];
    return 0;
}