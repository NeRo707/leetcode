#include <bits/stdc++.h>

using namespace std;

int main() {
    int h1, m1, h2, m2;
    cin>>h1>>m1>>h2>>m2;

    int startmin = h1 * 60 + m1;
    int endmin = h2 * 60 + m2;
    int total = (startmin + endmin) % (24 * 60);

    int endhrs = total / 60;
    int endmins = total % 60;

    cout<<endhrs<<" "<<endmins<<endl;

    return 0;
}
