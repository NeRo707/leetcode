#include <iostream>
#include <algorithm>
#include <cstring>
#include <climits>

using namespace std;

const int N = 1e6 + 1;
bool d[N];

void sacery(int n){
    memset(d, true, N);

    for (int k = 2; k * k <= n; k++) {
        if (d[k]) {
            for (int i = k * k; i <= n; i += k)
                d[i] = false;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a[n + 1];
    int mx = INT_MIN;
    for (int k = 1; k <= n; k++) {
        cin >> a[k];
        mx = max(mx, a[k]);
    }
    
    sacery(mx);

    for (int k = 1; k <= n; k++) {
        cout << d[a[k]] << " ";
    }
    return 0;
}
