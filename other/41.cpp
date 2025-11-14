#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
bool visited[100005];
int dist[100005];

void bfs(int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    dist[s] = 1;
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        for(int u : adj[v]) {
            if(!visited[u]) {
                visited[u] = true;
                q.push(u);
                dist[u] = dist[v] + 1;
            }
        }
    }
}

int main() {
    int n, m, s;
    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin >> s;
    bfs(s);
    int mxd = 0;
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            cout << -1 << endl;
            return 0;
        }
        mxd = max(mxd, dist[i]);
    }
    cout << mxd << endl;
    return 0;
}
