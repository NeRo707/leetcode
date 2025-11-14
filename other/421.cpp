#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int cnt = 0;
    for (int i = n; i > 0; i -= a, a+=b){
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
