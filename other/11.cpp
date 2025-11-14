#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;

    string ans="";

    for(int k=1; k<=n; k++) {
      if(k % 2 == 1){
        ans.push_back('9');
      }else{
        ans.push_back('8');
      }
    }

    cout<<ans;

    return 0;
}
