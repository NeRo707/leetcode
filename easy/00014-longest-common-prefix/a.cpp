class Solution {
public:
string longestCommonPrefix( vector<string> &s) {
    sort(s.begin(), s.end());
  int n = s.size();
  string ans = "";
  string s1 = s[0];
  string s2 = s[n - 1];
  for (int k = 0; k < min(s1.size(), s2.size()); k++) {
    if (s1[k] == s2[k]) {
      ans += s1[k];
    } else {
      break;
    }
  }
  return ans;
}
};
