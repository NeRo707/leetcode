class Solution {
public:
    int mySqrt( int x) {
      long l = 1;
      long r = x;
      while(l <= r) {
        long mid = (l + r) / 2;
        if(mid * mid == x) {
          return mid;
        } else if(mid * mid < x) {
          l = mid + 1;
        } else {
          r = mid - 1;
        }
      }
      return l - 1;
    }
};
