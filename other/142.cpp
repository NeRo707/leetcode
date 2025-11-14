#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,c=0,sum=0;
    cin>>m>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum < m || sum == m){
            c++;
        }
    }
    cout<<c;
    return 0;
}
