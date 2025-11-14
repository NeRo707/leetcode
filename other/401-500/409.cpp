#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned long long n,x;
	cin>>n;
	x=1; 
	while (x<=n){
		x*=2;
	}
	cout<<x/2;

    return 0;
}