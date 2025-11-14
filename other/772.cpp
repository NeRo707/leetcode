#include <bits/stdc++.h>
using namespace std;

int main() {
  int cnts[26] = {0};

  string s;
  cin>>s;

  for(char ch : s){
     cnts[ch - 'a']++;
  }

  for (int i = 0; i < 26; i++) {
    cout<<cnts[i]<<" ";
  }
  cout<<endl;

  return 0;
}
