#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, a, b;
	cin>>n>>a>>b;
    
    long long l=0, r=n*max(a,b), mid;
    
    while (l < r){
        mid = (l+r)/2;
        long long x = mid/a + mid/b;
        
        if (x < n)
            l = mid + 1;
        else 
            r = mid;
        
    };
    
    cout<< l;
    return 0;
}