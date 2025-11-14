#include <bits/stdc++.h>

using namespace std; 
int main(){ 
    int n;
    cin>>n;
    int a[n][n]; 

    for(int x = 0; x < n; x++){ 
        for(int y = 0; y <= x; y++){  
          if(y == 0 || y == x){
             a[x][y] = 1; 
          }else{
             a[x][y] = a[x - 1][y - 1] + a[x - 1][y]; 
          }
          cout<<a[x][y]<<" "; 
        } 
        cout<<endl; 
    }

    return 0; 
} 