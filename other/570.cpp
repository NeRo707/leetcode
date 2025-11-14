#include <iostream>

using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    
    int n,q;
    cin>>n>>q;
    int a[n+1];
    
    for(int i=1;i<=n;i++) 
    cin>>a[i];

    for(int k=1;k<=q;k++){
        int x;
        cin>>x;

        int l=1,r=n;
        
        while(l<r){

          int m=(l+r)/2;

          if(a[m]<x){
            l=m+1;
          
          } else {
            r=m;
          
          }
        }
        
        if(a[l]-x>=x-a[l-1] && l>1){
          cout<<a[l-1]<<' ';
        } else {
          cout<<a[l]<<' ';
        } 

    }
}