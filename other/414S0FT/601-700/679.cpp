#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin>>x>>y;

    char a[x][y];
    char b[x][y];

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin>>a[i][j];
            b[i][j] = a[i][j];
        }
    }

    for(int i = 0; i < x-1; i++){
        for(int j = 0; j < y-1; j++){
            if(a[i][j] == '#'){
                if(j+1 < y) b[i][j+1] = '#';
                if(i+1 < x) b[i+1][j] = '#';
                if(i+1 < x && j+1 < y) b[i+1][j+1] = '#';
            }
        }
    }

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout<<b[i][j];
        }
        cout<<endl;
    }

    return 0;
}
