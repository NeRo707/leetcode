#include <iostream>
typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
    int n,m; 
      cin>>n>>m;  
	  
    ll d[n+1][m+1] = {}; 
    
    for(int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
        	cin>>d[i][j];
        }
    }

    for(int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
          d[i][j] += d[i][j-1] + d[i-1][j] - d[i-1][j-1];
        }
    }

    int q,x,y;
      cin>>q;
    for(int k=0; k<q; k++){
      cin>>x>>y; 
        cout<<d[x][y]<<endl;
    }

  return 0;
}