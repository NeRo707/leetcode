#include <bits/stdc++.h>
using namespace std;

  map<char,int> mp;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    
    for(char c : s1) mp[c]++;
    for(char c : s2) mp[c]++;
    
    for(auto k : mp){
      if(k.second % 2 != 0){
        cout<<"no"<<endl;
        return 0;
      }
    }

    cout<<"yes"<<endl;
    return 0;
}