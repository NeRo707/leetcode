#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin>>arr[i];
    }
    // for(int i = 0; i < n; i++){
    //   cout<<arr[i]<<" ";           unsorted
    // }
    cout<<endl;
    for(int i = 0; i < n; i++){
      for(int j = i+1; j<n; j++){
        if(arr[j]<arr[i]){
          int temp = arr[i];
          arr[i] = arr[j];          //simplest sort x)
          arr[j] = temp;
        }
      }
    }
      for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";            //sorted
      }
      cout<<endl;
    return 0;
}