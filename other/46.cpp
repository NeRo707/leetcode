#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, sum;
    cin >> a;
    b = (a % 1000) / 100;
    c = (a % 100) / 10;
    sum = b + c;
    cout << sum;
    return 0;
}