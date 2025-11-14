#include <bits/stdc++.h>
using namespace std;
int main() {
    unsigned long long n;
    cin >> n;
    char arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(char k: arr){
        cout<<(char)tolower(k)<<" ";
    }
    return 0;
}