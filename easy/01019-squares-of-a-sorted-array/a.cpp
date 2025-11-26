class Solution {
public:
  vector<int> sortedSquares( vector<int> nums) {
    int l = 0, r = nums.size() - 1;
    vector<int> ans;
    while (l <= r) {
      int lsq = nums[l] * nums[l];
      int rsq = nums[r] * nums[r];
      if (lsq > rsq) {
        ans.push_back(lsq);
        l++;
      } else {
        ans.push_back(rsq);
        r--;
      }
    }
    reverse(ans.begin(), ans.end());
    return ans;
  }
};
