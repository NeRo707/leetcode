#include <bits/stdc++.h>
using namespace std;

    int n;
    char a[151][151];
    bool visited[151][151];
    int mx = 0;
    int tmx = 0;

  void dfs(int i, int j) {
      
      if (i < 0 || i >= n || j < 0 || j >= n || a[i][j] == '#' || visited[i][j]) return;

      visited[i][j] = true;
      tmx++;

      dfs(i + 1, j);
      dfs(i - 1, j);
      dfs(i, j + 1);
      dfs(i, j - 1);
  }

  int main() {
      
      cin>>n;

      for (int i = 0; i < n; i++) {
          for (int j = 0; j < n; j++) {
              cin >> a[i][j];
          }
      }
      
      for (int i = 0; i < n; i++) {
          for (int j = 0; j < n; j++) {
              if (!visited[i][j] && a[i][j] == '.') {
                  tmx = 0;
                  dfs(i, j);
                  mx = max(mx, tmx);
              }
          }
      }

        cout << mx << endl;
      
      return 0;
  }
