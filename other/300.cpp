#include <bits/stdc++.h>

using namespace std;

int min_cost_to_climb_ladder(int n, vector<int>& cost) {
    vector<int> min_cost(n+1);
    min_cost[0] = 0;
    min_cost[1] = cost[0];
    for (int i = 2; i <= n; i++) {
        min_cost[i] = cost[i-1] + min(min_cost[i-1], min_cost[i-2]);
    }
    return min_cost[n];
}

int main() {
    int n;
    cin >> n;
    vector<int> cost(n);
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }
    cout << min_cost_to_climb_ladder(n, cost) << endl;
    return 0;
}