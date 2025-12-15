#include <bits/stdc++.h>
using namespace std;

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  string str;
  cin>>str;

  transform(str.begin(), str.end(), str.begin(), ::tolower);

  set<char> s;

  for (int k = 0; k < str.size(); k++) s.insert(str[k]);

  (s.size() == 1) ?  (cout << "True") : (cout << "False");

  return 0;
}
