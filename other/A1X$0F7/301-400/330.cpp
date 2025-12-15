#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,i;
    cin >> a >> b;
    if(a > b){
        i = b;
        while(i <= a){
            if(i % 2 != 0){
                cout<<i<<" ";
            }
            i++;
        }
    }else{
        i = a;
        while(i <= b){
            if(i % 2 != 0){
                cout<<i<<" ";
            }
            i++;
        }
    }
}