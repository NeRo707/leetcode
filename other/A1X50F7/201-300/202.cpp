#include <bits/stdc++.h>

using namespace std;

int main() {
     
     int n; 
     cin>>n;
     long long a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 2; i++) {
        // cout<<a[i + 2]<<" Min: "<<(a[i])<<" "<<a[i+1]<<" = "<< min(a[i], a[i + 1])<<"\n"; 
        a[i + 2] += min(a[i], a[i + 1]);        //imena logika.ge
        // for(int k: a){
        //     cout<<k<<" "; 
        // }cout<<"\n";
    }

    cout << a[n - 1];

    return 0;
}