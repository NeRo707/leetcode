#include <bits/stdc++.h>

using namespace std;

string divideByTwo(string num) {
    string res = "";
    int carry = 0;
    for (int i = 0; i < num.length(); i++) {
        int digit = (num[i] - '0') + carry * 10;
        res += to_string(digit / 2);
        carry = digit % 2;
    }
     int st = 0;
     while (res[st] == '0' && st != res.length() - 1) {
         st++;
     }

    return res.substr(st);
}

int main() {
    string s;
    cin >> s;
    cout << divideByTwo(s) << endl;
    return 0;
}
