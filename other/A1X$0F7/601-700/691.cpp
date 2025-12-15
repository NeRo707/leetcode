#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    vector<int> res(n);
    int l = 0, r = n - 1;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            res[i] = nums[l++];
        } else {
            res[i] = nums[r--];
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << res[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    return 0;
}
