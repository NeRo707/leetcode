#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin>>s1>>s2;

    int s1_csum=0, s2_csum=0;

    int mn1 = INT_MAX;
    for (int k=0; k<s1.size(); k++) {
      mn1=min(mn1, ((s1[k] - '0') + 48));
      s1_csum+=s1[k];
    }
    s1_csum-=mn1;
  
    int mn2 = INT_MAX;
    for (int k=0; k<s1.size(); k++) {
      mn2=min(mn2, ((s2[k] - '0') + 48));
      s2_csum+=s2[k];
    }
    s2_csum-=mn2;

    cout<<max(s1_csum, s2_csum)<<endl;
    return 0;
}//01001111 01000110 01001100 01001001 01001101 01001111 01000100 01000101
