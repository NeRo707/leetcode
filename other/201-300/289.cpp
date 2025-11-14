#include <bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;

 
bool ptr(ull a[], ull n, ull m, ull x){
    ull cnt=1, w=a[0];
    
    for(ull i=1; i<n; i++){
        if(a[i] - w >= x){
            cnt++;
            w=a[i];
        }
    }
    return cnt >= m;
}


 
int main() {
    ull n,m;
    cin>>n>>m;
    
    ull a[n] = {0};

    for(ull k=0; k < n; k++){
        cin>>a[k];
    }
    
    sort(a, a+n);
    
    ull l=1, r = a[n-1] - a[0], md, x=0;
    
    while(l<=r){
        md=l+(r-l)/2;
        
        if(ptr(a, n, m, md)){
            l=md+1;
            x=md;
        }else{
            r=md-1;    
        }
    }
    
    cout<<x;

    return 0;
}