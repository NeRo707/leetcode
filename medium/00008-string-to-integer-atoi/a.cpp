class Solution {
public:
  int myAtoi( string s) {
    int sign = 1;
    long long res = 0;
    int i = 0;
    while (s[i] == ' ') {
      i++;
    }
    if (s[i] == '-') {
      sign = -1;
      i++;
    } else if (s[i] == '+') {
      sign = 1;
      i++;
    }
    while (s[i] >= '0' && s[i] <= '9') {
      if (res > (INT_MAX - (s[i] - '0')) / 10) {
        return (sign == -1) ? INT_MIN : INT_MAX;
      }
      res = res * 10 + (s[i] - '0');
      i++;
    }
    return res * sign;
  }
};
