#include <bits/stdc++.h>
int a[20][20];
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    
    for(int k = 0; k < m; k++){
        int v1,v2;
        
        cin>>v1>>v2;
        
        a[v1][v2] = a[v2][v1] = 1;
    }
    
    for(int k = 1; k <= n; k++){
        for(int j = 1; j <= n; j++){
            cout<<a[k][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}