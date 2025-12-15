#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, mid;
    cin >> N;
    int arr[N];
    for (int a = 0; a < N; a++) {
        cin >> arr[a];
    }
    cin >> M;
    int arr2[M];
    for (int k = 0; k < M; k++) {
        cin >> arr2[k];
    }
    for (int x = 0; x < M; x++) {
        int l = 0, r = N - 1;
        while (l < r) {
            mid = l + ((r - l) / 2);
            if (arr[mid] < arr2[x]) {
               l = mid + 1;
            } else if (arr[mid] > arr2[x]) {
            r = mid - 1;
            }else{
                l=r=mid;
            }
    }
        if(arr2[x] == arr[l]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}
    return 0;
}