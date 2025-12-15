#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b;

    cin >> n;
    cin >> a >> b;

    if (abs(a - b) == 1) {
        cout << 0;
    }

    else {
        int distance = min(abs(a - b), n - abs(a - b));
        cout << distance - 1;
    }

    return 0;
}
