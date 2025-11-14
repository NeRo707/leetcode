#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n % 2 != 0 && n > 0){
        cout << n << " ";
        n -= 2;
    }
    if(n % 2 == 0){
        n -= 1;
        while(n % 2 != 0 && n > 0){
            cout << n << " ";
            n -= 2;
        }
    }
}