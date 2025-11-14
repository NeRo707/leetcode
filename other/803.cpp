#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int b = ceil((double)n / m);
    int s = ceil((double)b / k);

    cout << b << " " << s << endl;

    return 0;
}
