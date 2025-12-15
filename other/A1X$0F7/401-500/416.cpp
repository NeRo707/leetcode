#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    
    a = a - b;
    b = b * 2;
    b = b - a;
    a = a * 2;
    
    if( a > 0 && b > 0){
        
        cout << a << " " << b;
    }else{
        cout << -1;
    }

    return 0;
}