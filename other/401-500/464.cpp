#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;
    
    vector<int> v;
    
    for(int i = 0; i < n; i++){
        if (s[i] == '1') {
            v.push_back(i);
        }
    }

    for(int i = 0; i < n; i++){
        int ans = 0;
        for(int j = 0; j < v.size(); j++){
            ans += abs(v[j] - i);
        }
        cout<<ans<<" ";
    }
    return 0;
}
