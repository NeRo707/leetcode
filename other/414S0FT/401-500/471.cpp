#include <bits/stdc++.h>
using namespace std;

int main() {
  int i;
  string s;
  cin>>s;
  cin>>i;

  int pow=0;
  for(int k=0;k<s.size();k++){
    if(s[k] == '1'){
      pow += abs(i - k);
    }
  }

  cout<<pow<<endl;
  return 0;
}
