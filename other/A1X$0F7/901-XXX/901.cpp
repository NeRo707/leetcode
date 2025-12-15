#include <bits/stdc++.h>
using namespace std;

string bankai(string str) {

    for (int i = str.length() - 1; i >= 0; i--) {
        if (str[i] == '9') {
            str[i] = '0';
            
            if (i == 0) {
                str = "1" + str;
                break;
            }
        } else {
            str[i]++;
            break;
        }
    }
    return str;
}

int main() {
    string num;
    cin >> num;
    
    cout << bankai(num) << endl;

    return 0;
}