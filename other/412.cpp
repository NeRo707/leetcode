#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m,x,y,humans;
    cin>>n>>m;
    cin>>x>>y;
    humans=n+m;
    if(humans <= x){
        cout<<humans<<" "<<0<<" "<<0;
        return 0;
    }
    humans=humans-x;
    if(humans<=y){
        cout<<x<<" "<<humans<<" "<<0;
        return 0;
    }
    humans=humans-y;
    cout<<x<<" "<<y<<" "<<humans;
    return 0;
}