#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n>=2000 && n<2100) cout<<21;
    else if(n>=1900&& n<2000) cout<<20;
    else cout<<-1;
}