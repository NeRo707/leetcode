#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll gcd(int a, int b){
  if (b == 0)return a;
  
  return gcd(b, a % b);
}
 
ll lcm(int a, int b){
    
    return (a / gcd(a, b)) * b;
}
  
int main(){
    int n, m;
    cin>>n>>m;
    
    cout<<lcm(n+1, m+1);
    
    return 0;
}