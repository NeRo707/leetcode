#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    string res;
    for (char c : s) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
            res += '.';
            res += c;
        }
    }

    cout << res << endl;

    return 0;
}