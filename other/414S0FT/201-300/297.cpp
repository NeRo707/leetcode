#include <bits/stdc++.h>
using namespace std;

vector<int> adj[21];
bool vis[21];

int cnts[21];

void bfs(int s) {
  queue<int> q;
  q.push(s);
  vis[s] = true;

  cnts[s] = 0;

  while (!q.empty()) {
    int u = q.front();
    q.pop();
    //cout << u << " ";
    for (int v : adj[u]) {
      if (!vis[v]) {
        vis[v] = true;
        q.push(v);
        cnts[v] = cnts[u] + 1;
      }
    }
  }
}

int main() {

  int n, m;
  cin >> n >> m;

  for (int k = 1; k <= m; k++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  fill_n(cnts, 21, -1);

  // for(int w : cnts){
  //   cout<<w<<" ";
  // }

  int a, b;
  cin >> a >> b;

  bfs(a);

 // cout << endl;

  cout << cnts[b];

  //cout << endl;

  // for (int k = 1; k <= n; k++) {
  //   cout <<a<<" to " << k << " is: " << cnts[k] << endl;
  // }

  return 0;
}