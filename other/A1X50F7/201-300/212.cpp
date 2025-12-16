#include <bits/stdc++.h>
using namespace std;
int main() {
    char x,y;
    cin>>x>>y;
if(x < y){
    for(char i = x; i <= y; i++) {
        cout << i << " ";
    }
}else{
    for(char i = x; i >= y; i--) {
        cout << i << " ";
    }
}
    return 0;
}