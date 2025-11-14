#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x,y,z;

    cin>>a>>b>>c;
    cin>>x>>y>>z;

    a *= 1;
    b *= 2;
    c *= 3;

    x *= 1;
    y *= 2;
    z *= 3;

    int leb = a+b+c;
    int zan = x+y+z;

    if(leb>zan){
        cout<<"YES";
        return 0;
    }else{
        cout<<"NO";
        return 0;
    }

}
