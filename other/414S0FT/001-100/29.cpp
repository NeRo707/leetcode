#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	cin>>n;
	int a[n];
	for(int k=0; k<n; k++){
		cin>>a[k];
	}
	
	int cnt=0;
	vector<int> v;
	for(int k=0; k<n; k++){
		
		while(a[k] == 0){
			
			cnt++;
			k++;
		}
		v.push_back(cnt);
		cnt = 0;
	}
	
	cout<<*max_element(v.begin(), v.end());


    return 0;
}