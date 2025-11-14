#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  bitset<64> binary(n);

  string binaryString = binary.to_string();
  binaryString.erase(0, binaryString.find_first_not_of('0'));

  binaryString.length() > 0 ? cout<<binaryString : cout<<0;

  return 0;
}