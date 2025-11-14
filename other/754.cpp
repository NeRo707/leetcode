#include <bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;

ull pongo(ull n){
    
    if(n == 1) return 1;
    
    return n * pongo(n-1);
}

int main(){

  ull n;
  cin >> n;
  cout<<pongo(n);
//   unsigned long long f=1;
//   for (int i = 1; i <= n; ++i){
//     f *= i;
//   }
//   cout<<f;
  return 0;
}