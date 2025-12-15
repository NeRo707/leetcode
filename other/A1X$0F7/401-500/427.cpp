#include <bits/stdc++.h>
using namespace std;

bool containsFour(int n) {
    while (n > 0) {
        if (n % 10 == 4) {
            return true;
        }
        n /= 10;
    }
    return false;
}

int main() {
    int n, t;
    cin >> n >> t;

    for(int k = 0; k < t; k++){
        do {
            n++;
        } while (containsFour(n));
    }

    cout << n;
    return 0;
}