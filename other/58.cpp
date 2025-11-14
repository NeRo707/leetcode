#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int n,m,t; cin>>n>>m>>t;
    int a[(n*m)];

    for(int k=0; k<(n*m); k++){
      cin>>a[k];
    }

     int c=0;
    for(int k=0; k<(m*n)-m; k++){
      if(2 * a[k]<a[k+m]){
        c+=t;
      } 
    }
    cout<<c;

    return 0;
}