#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    int w = 0;
    while(w < n){
        cin>> arr[w];
        w++;
    }
    int j = 0;
    for(int k = 1; k < n; k++){
        if(arr[k] <= arr[j]){
            j = k;
        }
    }
    cout<< arr[j];
    return 0;
}