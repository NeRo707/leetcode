#include <bits/stdc++.h>
using namespace std;

int n, x, a;

int main() {
  cin>>n;
   for (int i=0; i<n; i++) {
       cin>>x;
       a=a^x;
   }

   cout<<a;
}
