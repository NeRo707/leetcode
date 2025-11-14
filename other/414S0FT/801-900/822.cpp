#include <bits/stdc++.h>
using namespace std;

string removeZeros(string s){
  string ans = "";
  for(int i = 0; i < s.length(); i++){
    if(s[i] != '0'){
      ans += s[i];
    }
  }
  return ans;
}


int main(){
  string s;
  cin>>s;

  string ans = removeZeros(s);
  
  cout<<ans;
  
  return 0;
}