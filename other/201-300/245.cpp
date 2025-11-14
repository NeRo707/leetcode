#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, m;
    cin >> n >> k >> m;
    int x = n*k;
    int i = 0;

    if(x > m){
        cout<< 1;
        return 0;
    }else{
        while(i <= 100 && m > 0 || m > - 1){
            m -= x;
            i++;
        }
        cout<<i;
    }
    return 0;
}