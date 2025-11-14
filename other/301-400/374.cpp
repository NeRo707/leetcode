#include <bits/stdc++.h>

using namespace std;

int main() {
    string a,b;
    cin>>a>>b;

    string x = a + b;
    string y = b + a;

    if(x>y) cout<<x<<endl;
    else cout<<y<<endl;


    return 0;
}