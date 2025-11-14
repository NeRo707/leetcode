#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin>>s;

    while (true){
        int p = s.find("()");
        if (p != -1) {
            s.erase(p, 2);
            continue;
        }
        p = s.find("{}");
        if (p != -1) {
            s.erase(p, 2);
            continue;
        }
        p = s.find("[]");
        if (p != -1) {
            s.erase(p, 2);
            continue;
        }
        break;
    }

    if (s.empty()) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}
