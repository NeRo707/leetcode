#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    char arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<'\n';

    for (int j = 0; j < n; j++) {
        if (arr[j] >= 'a' && arr[j] <= 'z') {
            arr[j] = arr[j] - 32;
        } else if (arr[j] >= 'A' && arr[j] <= 'Z') {
            arr[j] = arr[j] + 32;
        }
    }

    for(char i: arr){
        cout<< i <<"\n";
    }

    return 0;
}