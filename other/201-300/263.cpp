#include <bits/stdc++.h>
using namespace std;

vector<int> mtx[51];
bool visited[21];
int n, m, k;
int cnt=0;

void dfs(int v){
    cnt++;
    visited[v] = true;
    for(int k = 0; k < mtx[v].size(); k++){
        int a = mtx[v][k];
        if(!visited[a]){
            dfs(a);
        }
    }
}

int main(){
    cin>>n>>m>>k;

    for (int i = 0; i < m; i++) {
        int v1, v2;
        cin>>v1>>v2;
        mtx[v1].push_back(v2);
        mtx[v2].push_back(v1);
    }

    dfs(k);

    cout<<cnt;
    return 0;
}
