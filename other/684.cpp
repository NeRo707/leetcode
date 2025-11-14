#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, n, m;
    cin >> x >> y >> n >> m;

    int x_price = x * n;
    int y_price = y * m;
    int xy_price = x_price + y_price;

    if(xy_price % 5 == 0){
        cout << xy_price/100 << " " << xy_price%100 << endl;
    }
    else{
        int diff = 5 - xy_price % 5;
        cout << (xy_price + diff)/100 << " " << (xy_price + diff)%100 << endl;
    }
    return 0;
}
