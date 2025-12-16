#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == s[i + 1]) {
            cnt++;
        } else {
            if (cnt > 2) {
                cout << cnt << s[i];
            } else {
                for (int j = 0; j < cnt; j++)
                  cout << s[i];
            }
            cnt = 1;
        }
    }
    return 0;
}
