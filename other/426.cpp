#include <bits/stdc++.h>

using namespace std;

int main() {
    
int k,a,b; 

    cin>>k>>a>>b;
    
   for(int n=0; n<a; n++ ){
       
   	k++; if(k==13)k++;
   }
   for(int n=0; n<b; n++ ){
   	k--; if(k==13) k--;
   }
   cout<<k;

    return 0;
}