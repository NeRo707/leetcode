#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c;

    cin>>a>>b>>c;
    if(b == 0 && c > 0){
        cout<<"NO";
        return 0;
    }

    if (a+b == c){
        cout<<"YES"<<"\n"<<a<<"+"<<b<<"="<<c;
        return 0;
    }else if (a-b == c){
        cout<<"YES"<<"\n"<<a<<"-"<<b<<"="<<c;
        return 0;
    }else if (a*b == c){
        cout<<"YES"<<"\n"<<a<<"*"<<b<<"="<<c;
        return 0;
    }else if (a/b == c){
        cout<<"YES"<<"\n"<<a<<"/"<<b<<"="<<c;
        return 0;
    }else if (a % b == c) {
        cout << "YES" << "\n" << a << "%" << b << "=" << c;
        return 0;
    } else 
    cout << "NO";
    return 0;
}