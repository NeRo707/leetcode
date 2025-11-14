#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t1, t2;
    cin >> n >> t1 >> t2;

    vector<int> p(n), t(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    int imn = min_element(p.begin(), p.end()) - p.begin();
    int imx = max_element(p.begin(), p.end()) - p.begin();

    if (t[imn] <= t1 && t[imx] <= t2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
//ragna crimson