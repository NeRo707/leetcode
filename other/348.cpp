#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int x;
    cin>> n >> x;
    int arr[n];
    int k = 0;
    int y = -1;
    while(k < n) {
        cin >> arr[k];
        k++;
    }
   int size = sizeof(arr) / sizeof(int);
    for(int i = 0; i < size; i++){
        if(arr[i] == x){
            y = x;
            cout<<i<<" ";
        }
    }
    if(y == -1){
        cout << -1;
    }
    return 0;
}

