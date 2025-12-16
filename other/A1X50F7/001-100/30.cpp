#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string ans = "";
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int d1 = i >= 0 ? a[i] - '0' : 0;
        int d2 = j >= 0 ? b[j] - '0' : 0;
        int sum = d1 + d2 + carry;
        ans += to_string(sum % 10);
        carry = sum / 10;
        i--;
        j--;
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}
