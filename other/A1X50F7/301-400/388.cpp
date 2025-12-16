#include <bits/stdc++.h>

using namespace std;
int main(){
  string s;
  cin >> s;
  int sum = (s[s.size() - 4] - 48) * 1000 + (s[s.size() - 3] - 48) * 100 + (s[s.size() - 2] - 48) * 10 + (s[s.size() - 1] - 48);

  if (sum % 4 == 0 && sum % 100 != 0 || sum % 400 == 0){
    cout << "YES";
    return 0;
  }
  cout << "NO";
  return 0;
}