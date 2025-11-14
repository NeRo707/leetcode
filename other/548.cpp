#include<bits/stdc++.h>
using namespace std;

int n, m;
char grid[1005][1005];
bool used[1005][1005];

void dfs(int x, int y) {
    used[x][y] = true;

    if(grid[x-1][y] == '.' and !used[x-1][y]) dfs(x-1, y);
    if(grid[x+1][y] == '.' and !used[x+1][y]) dfs(x+1, y);
    if(grid[x][y-1] == '.' and !used[x][y-1]) dfs(x, y-1);
    if(grid[x][y+1] == '.' and !used[x][y+1]) dfs(x, y+1);
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == '.' && !used[i][j]) {
                dfs(i, j);
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
