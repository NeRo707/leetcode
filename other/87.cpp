#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull n;
ull a[20];

ull pongo(ull a[], ull n){
    if(n == 1) return a[0];
    
    return a[n-1] + pongo(a, n - 1);
}


int main() {

    cin >> n;
    
    for(int k = 0; k < n; k++)cin>>a[k];
    
    cout<<pongo(a, n);

    return 0;
}
