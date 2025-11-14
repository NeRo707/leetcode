#include <bits/stdc++.h>

using namespace std;

int main() {
  string str;
  getline(cin, str);

  vector<int> vec(26, 0);

  for (int x : str) {
    vec[x - 'a']++;
  }

  vector<int> freq;
  for (int x : vec) {
    if (x > 0) {
      freq.push_back(x);
    }
  }

  sort(freq.begin(), freq.end());

  if (freq[0] == freq[freq.size() - 1]) {
    cout << "YES";
    return 0;
  }

  if (freq[0] + 1 == freq[1] && freq[1] == freq[freq.size() - 1]) {
    cout << "YES";
    return 0;
  }

  if (freq[0] == freq[freq.size() - 2] &&
      freq[0] + 1 == freq[freq.size() - 1] and freq[0] == 1 and
      freq.size() < 26) {
    cout << "YES";
    return 0;
  }

  if (freq[0] + 1 == freq[1] and freq[1] == freq[freq.size() - 2] and
      freq[0] + 2 == freq[freq.size() - 1]) {
    cout << "YES";
    return 0;
  }
  
  if (freq.size() == 2 and freq[0] + 2 == freq[1]) {
    cout << "YES";
    return 0;
  }
  
  if (freq.size() == 2 and freq[0] == 1) {
    cout << "YES";
    return 0;
  }

  if (freq.size() == 3 and freq[0] == 1 and freq[1] + 1 == freq[2]) {
    cout << "YES";
    return 0;
  }
 
  if (freq[0] == 1 and freq[1] + 1 == freq[2] and
      freq[2] == freq[freq.size() - 1]) {
    cout << "YES";
    return 0;
  }
  cout << "NO";

  return 0;
}