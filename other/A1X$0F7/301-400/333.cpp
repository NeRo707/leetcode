#include <bits/stdc++.h>

using namespace std;


int main() {
    int n,c = 1;
    cin >> n;
    int sum=0;
    while(c <= n){
        if(n % c == 0){
            //cout<<c<<" "; to view gamyof items unkommento dis
            sum = sum + c;
        }
        c++;
    }
    cout<<sum;
}