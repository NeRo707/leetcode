#include <bits/stdc++.h>
using namespace std;
map<char, bool> used;
int main(){

  string str, c;

  cin >> str >> c;

  transform(str.begin(), str.end(), str.begin(), ::tolower);
  transform(c.begin(), c.end(), c.begin(), ::tolower);

  int sum = 0;

  for (int k = 0; k < c.length(); k++){
    if (!used[c[k]]){
      used[c[k]] = true;
      sum += count(str.begin(), str.end(), c[k]);
    }
  }

  cout << sum;
  return 0;
}