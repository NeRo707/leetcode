#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  int cnt=0;
  for(int k = 1; k < n-1; k++){
    if(a[k]<a[k-1] && a[k]<a[k+1]){
      cnt++;
    }
  }
  cnt > 0 ? cout<<cnt<<endl : cout<<-1<<endl;
}