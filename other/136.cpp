#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    if(n >= 1 && n <= pow(10, 3)){
        if(n % 2 == 0){
            cout << "NO";
        }else{
            cout << "YES";
        }
    }

    return 0;
}