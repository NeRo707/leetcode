#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++) {
    cin>>a[i];
  }

  int x;
  cin>>x;
  
  sort(a, a + n);

  int cnt = 0;
  for (int i = 0; i < n; i++){

    int target = x - a[i];
    int l = i + 1, r = n - 1;
    
    while (l <= r) {
      int mid = l + (r - l) / 2;

      if (a[mid] == target) {
        cnt++;
        break;
        
      } else if (a[mid] < target) {
        l = mid + 1;

      } else {
        r = mid - 1;
      }
    }
  }

  cout<<cnt<<endl;

  return 0;
}
