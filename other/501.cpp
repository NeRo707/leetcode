#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int pongo(int a, int b){
	
    if(a > b)swap(a, b);
    
    if(b == 0) return a;
    if(a == 0) return b;
    if(a == b) return a;
    
    
    return pongo(a, b % a);
};



int main() {
   
   int n;
   
   cin>>n;
   
   int a[n];
   
   for(int k=0; k<n; k++)cin>>a[k];
   
  int ans=0;
  for(int k = 0; k < n ; k++){
  	
  	ans = pongo(a[k], ans);
  	
  }
  
  cout<<ans;
  
  
  return 0;
}
