#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,c = 1;
    cin >> n;
    int sum=0;
    while(c < n){
        if(n % c == 0){
            //cout<<c<<" ";
            sum += c;
        }
        c++;
    }
    if(sum == n){
        cout<<"yes"<<endl;
        return 0;
    }else if(sum != n){
        cout<<"no"<<endl;
        return 0;
    }
    return 0;
}