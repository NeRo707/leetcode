#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;

    int cnt=0;
    for(int k=0;k<s.size();k++){
        if(s[k]=='0'){
            cnt++;
        }else{
            cout<<s[k];
        };
    }
    
    while(cnt--){
        cout<<0;
    }
    
    return 0;
}