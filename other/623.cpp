#include <bits/stdc++.h>
using namespace std;
int main() {
  int k, line;
  cin >> k >> line;
  int page = (line - 1) / k + 1;
  int lopg = line - (page - 1) * k;
  cout << page << " " << lopg <<endl;
  return 0;
}
