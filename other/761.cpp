#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,u,v;
    cin>>n>>u>>v;
    int arr[n];
    int mx=INT_MIN;
    int imax;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>mx){
            mx=arr[i];
            imax=i;
        }
    } 
    int st = 0;
    int baki = 0;
    int cnt=1;
    while(st < imax){
        int k = st + 1;
        while( arr[st] >= arr [k] ){
          cnt++;
          k++;
        } 
        baki += u * arr[st] * v * cnt;
        cnt=1;
        st=k;
    }
    st = n - 1;
    while(st > imax){
      int k = st-1;
       while( arr[st] > arr [k] ){
            cnt++;
         k--;
       }
      baki += u * arr[st] * v * cnt;
      cnt=1;
      st=k;
    }


    cout<<baki;
    return 0;
}