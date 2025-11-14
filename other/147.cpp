#include <bits/stdc++.h>
using namespace std;


int b[1001];

int main() {
   int n;
   cin>>n;
   int a[n];
  //input elements in a[]
   for(int i = 1; i <= n; i++){
    cin>>a[i];
   }
// make number from a[] b[]'s index & number & turn it into 1
   for(int x = 1; x <= n; x++){
      b[a[x]] = 1;
   }
//counts 1's in b[]
  int m = 0;
  for(int k: b){
    if(k == 1){
      m++;
    }
  }
  //ouwpuw 1ianebi
  cout<<m;

    return 0;
}