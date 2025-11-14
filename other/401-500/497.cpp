#include <bits/stdc++.h>
  
using namespace std;

int main() {
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int n[4] = {a, b, c, d};
    sort(n, n + 4);
    int y = 0;
    for(int i = 1; i < 4; i++){
      y += n[i];
    }cout<<endl;
    cout<<y+1;
    cout<<endl;
    return 0;
}