/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
const rotate = (nums, k) => {
  k = k % nums.length;
  let l = 0,
    r = nums.length - 1;
  while (l < r) {
    [nums[l], nums[r]] = [nums[r], nums[l]];
    l = l + 1;
    r = r - 1;
  }
  // console.log(nums);
  l = 0;
  r = k - 1;
  while (l < r) {
    [nums[l], nums[r]] = [nums[r], nums[l]];
    l = l + 1;
    r = r - 1;
  }
  // console.log(nums);
  l = k;
  r = nums.length - 1;
  while (l < r) {
    [nums[l], nums[r]] = [nums[r], nums[l]];
    l = l + 1;
    r = r - 1;
  }
  return nums;
}
