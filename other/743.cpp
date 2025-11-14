#include <bits/stdc++.h>
using namespace std;


int jami (int n){
    
    if (n<10) return n;
    int ans = jami (n/10);
    return n%10 + ans; // a%10 +jami(a/10)
    
}

int main() {
	
	int a,b;
	cin>>a>>b;
	
	for(int k = a; k <= b; k++){
		
		cout<<jami(k)<<' ';
	
	}
	
    return 0;
}