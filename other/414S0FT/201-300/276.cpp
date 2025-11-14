#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 1; i < 4; ++i) {
        string a = s.substr(0, i);
        string b = s.substr(i, 4-i);
        ans = max(ans, stoi(a) * stoi(b));
    }
    cout << ans << endl;
    return 0;
}
