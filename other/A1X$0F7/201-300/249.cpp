#include <iostream>
using namespace std;
int main() {
  int a;
  cin>>a;
  int n[a];
  for(int x = 0; x < a; x++){
    cin>>n[x];
  }
  int size = sizeof(n) / sizeof(int);  
  for(int k = 1; k < size; k++){
    swap(n[0], n[size - k]);
  }
  for(int i: n){
    cout<<i<<" ";
  }
  return 0;
}
