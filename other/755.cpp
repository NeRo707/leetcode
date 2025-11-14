#include <bits/stdc++.h>
using namespace std;

long long powa(int a, int n){
	
	if(n == 0) return 1;
	
	long long ans = powa(a, n-1);
	
	return a * ans;
}



int main() {
	
	int n;
	cin>>n;
	
	cout<<powa(2, n);

    return 0;
}