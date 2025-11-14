#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int odd=0,even=0;
    for (int k=0; k<n; k++){
        if (k%2==0) odd=odd+s[k]-48; else if (k%2!=0) even=even+s[k]-48; }
    if ((odd-even)%11==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}