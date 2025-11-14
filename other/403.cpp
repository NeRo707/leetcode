#include <bits/stdc++.h>

using namespace std;

int main() {
    int h,f;
    cin >> h >> f;
    int b = h, c = 0;
    while(b >= 0){
    if(b*2+c*4  == f){
        cout << b << " " << c;
        return 0;
    } else {
        b--;    
        c++;   
    }
}

    cout << -1;

    return 0;
}