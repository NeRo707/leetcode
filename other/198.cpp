#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    int d[n];
    d[1] = 0;
    d[2]=d[3]=1;
    for(int k = 4; k <= n; k++){
        d[k] = d[k-2] + d[k-3];
    }
    cout<<d[n];
    return 0;
}