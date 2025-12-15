#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    vector<int> b(n);
    for(int k = 0; k < n; k++) {
      cin>>a[k];
    };

    for(int k = 0; k < n; k++){
      b[k] = a[k];
    }

    sort(a,a+n);

    int sc = a[n-2];

    for(int k = 0; k < n; k++){
      if(b[k] == sc){
        cout<<k+1<<endl;
        break;
      }
    }

    return 0;
}