#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

  ll a, b;
  cin >> a >> b;
  ll mn = abs(a-b);
  
  for(ll k = 1; k<=sqrt(a); k++){
    if(a%k == 0){
      mn = min(mn, abs(b-(a/k)));
      mn = min(mn, abs(b-k));
    };
  };

  cout << mn << endl;

  return 0;
}
