#include <bits/stdc++.h>

using namespace std;

int climb(int n){

    if(n <= 2) return n;
    int x = 1, y = 2;
    for(int i = 3; i < n; i++){
        int tmp = y;
        y += x;
        x = tmp;
    }
    return (x+y);
}

int main() {
    int n;
    cin >> n;
    cout << climb(n);
}