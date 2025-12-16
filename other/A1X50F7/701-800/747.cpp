#include <bits/stdc++.h>
using namespace std;


int main(){
	int x, y;
  cin>>x>>y;
  int cnt=0;
  for(int k = x; k <= y; k++){
    for(int i = 1; i<=k; i++){
      if(k%i==0){
        cnt++;
      }
    }
    cout<<cnt<<" ";
    cnt=0;
  }
	return 0;
}

