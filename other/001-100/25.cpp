#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, s, mid;
    cin>>n>>s;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
    
        int x = s - arr[i];
    
        int l = i + 1, r = n - 1;
    
        while (l <= r) {
            mid = (l + r) / 2;
            
            if(arr[mid] == x) {
              cout<<"YES"<<endl;
              return 0;
            }else if(arr[mid] < x) {
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
    }

    cout<<"NO"<<endl;

    return 0;
}
