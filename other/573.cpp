#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int inhales = 0;
  int exhales = 0;
  
  if (n == 1){
  cout<<-1;
  return 0;
}

  for (int i = 1; i <= n; i++) {
    if (i % 4 == 2) {
      inhales++;
    } else if (i % 4 == 0) {
      exhales++;
    }
  }

  if (inhales > exhales)
      cout << "Breathe in";
 	else 
      cout << -1;

  return 0;
}
