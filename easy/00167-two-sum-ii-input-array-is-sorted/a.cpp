class Solution {
public:
    vector<int> twoSum( vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            int x = target - nums[i];
            int l = i+1, r = n - 1;
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (nums[mid] == x && i != mid) {
                    return { i + 1, mid + 1};
                } else if (nums[mid] < x) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        return {0};
    }
};
