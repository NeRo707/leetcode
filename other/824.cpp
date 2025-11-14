#include <bits/stdc++.h>

using namespace std;

    set <char> ss;

bool xinkali(string s) {
            
    for(int k=0; k<s.size(); k++)ss.insert(s[k]);

    if(ss.size() < 25) return false;
            
    return true;
};



int main(){
    
    string s;
    cin>>s;
    
    if(xinkali(s)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    

    return 0;
}