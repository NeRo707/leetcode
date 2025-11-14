#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin >> a;
    
    int c = a % 10;
    int b = floor(a / 10 % 10);
    
    if( c > b ){
        cout << c;
    } else {
        cout << b;
    }
    

    return 0;
}