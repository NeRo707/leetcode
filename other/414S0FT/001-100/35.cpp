#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


ll pongo(ll a, ll b){
	
    //if(a > b)swap(a, b);
    
    if(b == 0) return a;
    if(a == 0) return b;
    if(a == b) return a;
    
    
    return pongo(b, a % b);
}



int main() {
  ll a, b;
  cin >> a >> b;
  
  cout<<pongo(a, b);
  return 0;
}
