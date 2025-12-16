#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, h, n;
    cin>>k>>h>>n;
    int d = (h + n) / 24;
    int cnt = (k + d - 1) % 7 + 1;
    cout<<cnt<<endl;
    return 0;
}
