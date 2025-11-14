#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    int arr[n];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if(k > arr[i]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}