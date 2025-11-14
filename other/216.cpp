#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rows = n;
    int cols = n;

    int arr[rows][cols];
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cin>>arr[i][j];
        }
    }
    int di_sum = 0;

    for(int i = 0; i < n; i++){
        di_sum += arr[i][i];
    }
    cout<<endl<<di_sum;
    return 0;
}