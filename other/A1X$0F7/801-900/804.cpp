#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, n, m;
    cin >> s >> n >> m;
    for(int i = 0; i < s; i++) {
        vector<int> v(m, 0);
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < m; k++) {
                char c;
                cin >> c;
                if(c == '#') v[k] = j;
            }
        }
        int min_val = *min_element(v.begin(), v.end());
        int max_val = *max_element(v.begin(), v.end());
        cout << max_val - min_val << endl;
    }
    return 0;
}