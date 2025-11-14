#include <bits/stdc++.h>
using namespace std;
typedef long long in;


in findMinRec(in arr[], in i, in sumCalculated, in sumTotal)
{
    if (i == 0)
        return abs((sumTotal - sumCalculated) - sumCalculated);
    return min(findMinRec(arr, i - 1, sumCalculated + arr[i - 1],sumTotal),findMinRec(arr, i - 1, sumCalculated, sumTotal));
}
 
in findMin(in arr[], in n)
{
    in sumTotal = 0;
    for (in i = 0; i < n; i++)
        sumTotal += arr[i];
 
    return findMinRec(arr, n, 0, sumTotal);
}
 
int main()
{
    in n;
    cin>>n;
    in arr[n];
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
    cout  << findMin(arr, n);
    return 0;
}