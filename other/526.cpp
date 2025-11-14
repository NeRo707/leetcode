#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    queue<int> que;
    while(q--) {
        string s;
        cin >> s;
        if(s == "push") {
            int x;
            cin >> x;
            que.push(x);
        } else if(s == "pop") {
            que.pop();
        } else if(s == "print") {
            queue<int> temp = que;
            if(temp.empty()) continue;
            while(!temp.empty()) {
                cout << temp.front() <<" ";
                temp.pop();
            }
            cout << endl;
        }
    }
    return 0;
}