#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin>>x>>y;
    string s = "a";
    for (int k = 1; k < x; k++) {
        string tmp = s;
        s = char('a' + k) + tmp + tmp;
    }
    cout << s[y - 1] << endl;
    return 0;
}
