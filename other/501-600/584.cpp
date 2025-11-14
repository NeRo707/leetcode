#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int k=2;
    if(n == 1){
        cout<<0;
        return 0;
    }
    while(k <= n/2){
        if(n%k==0){
            cout<<n/k;
            return 0;
        }
        k++;
    }
    cout<<1;
    return 0;
}