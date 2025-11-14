#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] % 2 == 1){
      a[i]++;
    }
  }
  for(int k: a){
    cout << k << " ";
  }
    return 0;
}