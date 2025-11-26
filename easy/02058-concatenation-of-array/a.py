class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        return nums + nums
"""
int len = nums.size();
        vector <int> ans = nums;
        for(int k = 0; k < len; k++){
            ans.push_back(nums[k]);
        }
        return ans;
"""
