#include <iostream>
#include <vector>
using namespace std;

void pongo(const vector<int>& v, int k) {
    if(k == -1)return;
    
    cout << v[k] << " ";
    
    pongo(v, k - 1);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pongo(v, n - 1);
    return 0;
}
