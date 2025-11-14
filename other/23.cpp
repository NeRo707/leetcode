#include <bits/stdc++.h>
using namespace std;

int main(){
    int e;
    cin>>e;
    int arr[e];
    for(int i = 0; i < e; i++){
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(int); //arr size
    int count = 0;
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                count++;
        }
    }
    cout<<count;

    return 0;
}