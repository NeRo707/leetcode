#include <bits/stdc++.h>
using namespace std;

int quickSort(int a[], int l, int r){
  if(l >= r) return 0;
  int i = l, j = r;
  int x = a[(l + r) / 2];
  while(i <= j){
    while(a[i] < x) i++;
    while(a[j] > x) j--;
    if(i <= j) swap(a[i++], a[j--]);
  }
  return quickSort(a, l, j) + quickSort(a, i, r);
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, m;
  cin>>n>>m;
  
  int a[n], b[m];

  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < m; i++){
    cin >> b[i];
  }
  int s[n+m];

  for (int i = 0; i < n; i++) {
    s[i] = a[i];
  }

  for (int i = 0; i < m; i++) {
      s[n + i] = b[i];
  }
  
  quickSort(s, 0, n + m - 1);


  for(int k = 0; k < n; k++){
  int x = a[k];

  int l = 0, r = n + m - 1;
  while(l <= r){ 
    int mid = (l + r) / 2; 
    if(s[mid] == x){
      cout << mid + 1 << " ";
      break;
    }
    else if(s[mid] > x){
      r = mid - 1;
    }else{
      l = mid + 1;
    }
  }
}


    return 0;
}