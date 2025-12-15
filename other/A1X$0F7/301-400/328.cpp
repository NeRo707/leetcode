#include <bits/stdc++.h>

using namespace std;

void pongo(int a, int b){

  if(a > b) exit(0);
  
  if(a % 2 == 0) cout<<a<<" ";

  pongo(a+1, b);
}

int main() {
  int a,b;
  cin>>a>>b;

  pongo(a, b);

  return 0;
}