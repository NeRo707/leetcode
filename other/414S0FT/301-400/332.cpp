#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n, x = 0;
    cin >> n;
    for(int c = 1; c <= n; c++){
        if(n % c == 0){
            x++;
        }
    }
    cout<<x;
}