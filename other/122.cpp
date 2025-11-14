#include <bits/stdc++.h>
using namespace std;
string s;

int haiya(int k){

  int sz = s.size();

  if(sz == k) return 0;

  bool c = isdigit(s[k]);

  int cnt = 0;
  
  if(c)cnt++;
  

  return cnt + haiya(k + 1);
}

int main(){

  cin>>s;
  cout<<haiya(0);
  return 0;
}