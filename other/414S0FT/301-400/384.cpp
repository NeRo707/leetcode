#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;

  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int a = ((s[0] - '0') * 10 + (s[1] - '0'));
    a*=a;
    int b = ((s[2] - '0') * 10 + (s[3] - '0'));
    b*=b;  
    int ans = (a + b) % 7;

    if (ans == 1) cout<<"YES"<<endl; else cout<<"NO"<<endl;
  }
    
    return 0 ;
}
