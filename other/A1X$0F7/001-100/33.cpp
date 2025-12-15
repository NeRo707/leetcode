#include <bits/stdc++.h>

using namespace std;
int m = INT_MIN;

int pongo(int a[], int k){
  
  m = max(m, a[k]);
  
  if(k == 0) return m;

  if(k == -1) return 0;

  return pongo(a, k-1);
}

int main(){

  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  cout<<pongo(a,n-1)<<endl;


    return 0;
}