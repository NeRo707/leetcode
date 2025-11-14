#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int x = 0; x <= n/3; x++) {
        if ((n - 3*x) % 5 == 0) {
            int y = (n - 3*x) / 5;
            cout << x << " " << y << endl;
            return 0;
        }
    }
    return 0;
}
