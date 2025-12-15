#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> a(N), b(M);

    for(int i=0; i<N; i++)
        cin >> a[i];

    for(int i=0; i<M; i++)
        cin >> b[i];

    sort(b.begin(), b.end());

    for(int i=0; i<N; i++) {
        cout << upper_bound(b.begin(), b.end(), a[i]) - lower_bound(b.begin(), b.end(), a[i]) << "\n";
    }

    return 0;
}
