#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> adj[N+1];
    for(int i = 0; i < N-1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    int cnt = 0;
    for(int i = 2; i <= N; i++) {
        if(adj[i].size() == 1) {
            cnt++;
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}
 