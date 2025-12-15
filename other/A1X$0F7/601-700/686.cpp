#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin>>x>>y;
    while (x>0 && y>0) {
        if (x > y){
          x %= y;
        }else{
          y %= x;
        }
    };
    if ((x == 1 || y == 1)){
        cout<<"yes"<<endl;
    } else {
        cout<<"no"<<endl;
    }

    return 0;
}