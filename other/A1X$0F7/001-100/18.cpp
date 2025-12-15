#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    int cnt = 0;
    if (m % n == 0) {
        long long div = m / n;
        while (div % 2 == 0) {
            div /= 2;
            cnt++;
        }
        while (div % 3 == 0) {
            div /= 3;
            cnt++;
        }
        if (div > 1) {
            cnt = -1;
        }
    } else {
        cnt = -1;
    }
    cout << cnt << endl;
    return 0;
}
