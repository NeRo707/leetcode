#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int n;
    cin >> n;
    double a[n];
    for(int i = 0; i < n; i++) {
      cin>>a[i];
    }

    int cnt = 0;
    double avg;
    for(int k=1; k<n-1; k++){
      avg = (a[k-1]+a[k+1])/2;
      if((fmod(a[k], 2) == 0) && a[k] == avg){
        cnt++;
      }
    }

    cnt > 0 ? cout<<cnt<<endl : cout<<-1<<endl;

    return 0;
}
