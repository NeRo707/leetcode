#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,m;
    cin>>n>>m;

    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            i>=k?cout<<m<<' ':cout<<0<<' ';
        }
        cout<<endl;
    }
    
    return 0;
}