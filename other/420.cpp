#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, a, b, c;
  cin >> n;
  cin>>a>>b>>c;
  long long x = abs(a-b) * n;
  long long y = abs(b-c) * n;

  cout<<x+y<<endl;


    return 0;
}