#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x){
   for(int i = 2; i <= sqrt(x); ++i)
      if(x%i==0) return false;
   return true;

}

int main() {

  int n;
  cin >> n;
  
  vector<int> a(n);

  int ans[n] = {0};
  int cnt=0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];

    if(isPrime(a[i])){
      ans[i] = 1;
    }

  }

  for(int k: ans){
    cout << k << " ";
  }
    return 0;
}