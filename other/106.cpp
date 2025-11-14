#include <bits/stdc++.h>

using namespace std;

int main() {
     
     int n; cin>>n; 
     int a[n];
     
     for(int k=0; k<n; k++)cin>>a[k];
     
     vector <int> ans;
     ans.push_back(a[n-1]); 
     for (int i=n-2, j = 0; i>=0; i--){
         
          if (a[i]>=ans[j]){
              j++;
              ans.push_back(a[i]);
          }
     }
 
  for(int k=ans.size()-1; k>=0; k--) cout<<ans[k]<<' ';

    return 0;
}