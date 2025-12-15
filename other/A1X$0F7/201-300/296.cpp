#include <bits/stdc++.h>

using namespace std;

    bool pongo(int n) {
    
        if(n == 1) return true;
        if(n == 0) return false;

        if(n % 2 == 0){
            return pongo(n / 2);
        }else{
            return false;
        }

    }

int main() {
    
    int n;
    cin>>n;
    
    pongo(n) ? cout<<"YES" : cout<<"NO";

    return 0;
}