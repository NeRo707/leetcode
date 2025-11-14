#include <bits/stdc++.h>

using namespace std;

int main() {
  int a,b;
  cin>>a>>b;
  int sumussy = a+b;
  int produssy= a*b;
  int totalussy=produssy-sumussy;
  if(totalussy>=0){
    cout<<"high"<<endl;
  }
  else{
    cout<<"low"<<endl;
  }
    return 0;
}