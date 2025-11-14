#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }
    sort(p.begin(), p.end());

    int sum = 0;
    for(int k = 0; k < n; k++){
        sum = max(sum, p[k].first) + p[k].second;
    }

    cout << sum - p[n-1].first << endl;

    return 0;
}
