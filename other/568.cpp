#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int cnt = -1;

    for (int k = s.size() - 1; k >= 0; k--) {
        if ((s[k] - '0') % 2 == 1) {
            cnt = k;
            break;
        }
    }
    
    if (cnt == -1) {
        cout<<"NO"<<endl;
    } else {
        for (int k = 0; k <= cnt; k++) {
            cout << s[k];
        }
        cout<<endl;
    }
    return 0;
}