#include <iostream>
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,s;
    
    cin>>n>>s;
    
    ll a[n];
    
    for(int k=0;k<n;k++){
        cin>>a[k];
    }
    
    ll cnt=0;
    for(int k=0;k<n;k++){
        
        ll x=a[k]+s+1;
        ll l=k;
        ll r=n-1;
        
        while(l<r){
            ll mid=(l+r)/2;
            
            if(x>a[mid]){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        
        if(a[l]-a[k]>s){
            cnt+=n-l;
        }
    }
    cout<<cnt;
    return 0;
} 