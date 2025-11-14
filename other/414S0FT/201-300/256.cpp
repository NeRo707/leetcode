#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll n, t;
vector<ll> a;

bool pongo(ll k,ll t){
    if(a[k] == t) return 1;
    if(k == -1 )  return 0;
    return pongo(k-1, t);
}

int main() {
    cin>>n>>t;
    a.resize(n);
    for(ll k = 0; k < n; k++)cin>>a[k];
    
    if(pongo(n-1, t)){
        cout<<"YES";
        return 0;
    }else{
        cout<<"NO";
        return 0;
    }

    return 0;
}
