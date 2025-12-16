#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    char t;
    cin >> s >> t;

    int cnt=0;
    for(int k = 0; k < s.size(); k++){
      if(toupper(t)==s[k] || tolower(t)==s[k]){
        cnt++;
      }
    }
    cout<<cnt;
    
    return 0;
}