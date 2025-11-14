#include <bits/stdc++.h>
using namespace std;

void pongo(vector<int>& v, int i, int n){
	if(n == 0){
      if(v.size() != 1){
      
      for (int i = 0; i < v.size() - 1; i++)cout<<v[i]<<"+";
      
      cout<<v[v.size()-1]<<endl;
    }
  }

	for (int j = i; j <= n; j++) {

		v.push_back(j);

		pongo(v, j, n - j);

		v.pop_back();
	}
}

int main(){
	int n;
  cin>>n;
	vector<int> v;
	pongo(v, 1, n);
	return 0;
}
