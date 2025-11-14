#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,b = 1;
    cin >> n;

    while(b <= n){
        if(n % b == 0){
            cout << b << " ";
        }
        b++;
    }
    return 0;
}