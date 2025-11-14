#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){

  ll n, w, h, cnt = 0;
  
  cin >> n >> w >> h;
  
  ll r = (max(w, h)) * n;

  ll l = 0, mid;
   
  while (l < r){
    mid = (l + r) / 2;

    ll cnt = (mid / w) * (mid / h);
    
    if (cnt < n)
      l = mid + 1;
    else
    {
      r = mid;
    }
  }
  
  cout << r;
  return 0;
}