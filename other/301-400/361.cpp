#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int s = log10(n) + 1;
    int b[s];
    int sum = 0;
    for(int i=0; i<s; i++)
    {
        b[i]=n%10;
        n=n/10;
        sum += b[i];
    }
    cout<< sum;
    return 0;
}