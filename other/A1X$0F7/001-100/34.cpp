#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll waurma(ll a, ll n){
  ll result = 1;
  ll base = a;
  ll exp = n;

   for (ll i = 1; exp > 0; i++) {
      if (exp % 2 == 1) {
        result = (result * base) % 1000000007;
        exp--;
      }
      base = (base * base) % 1000000007;
      exp /= 2;
    }
  return result;
}

int main(){

  ll a, n;
  cin>>a>>n;
  cout<<waurma(a, n);

}