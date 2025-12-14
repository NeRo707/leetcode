class Solution:
    def subsets(self, nums):
      res = []
      
      subset = []
      def backtrack(k):
        if k >= len(nums):
          res.append(subset.copy())
          return
        
        subset.append(nums[k])
        backtrack(k + 1)
        
        subset.pop()
        backtrack(k + 1)
        
      backtrack(0)
      return res

print(
    Solution().subsets([1, 2, 3])
)  # Expected: [[], [1], [2], [1,2], [3], [1,3], [2,3], [1,2,3]]
