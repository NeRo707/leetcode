#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        bitset<16> binary(num);
        int cnt = binary.count();
        cout << cnt << endl;
    }

    return 0;
}
