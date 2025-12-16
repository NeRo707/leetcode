function getConcatenation(nums: number[]): number[] {

  const len = nums.length;
  const res = new Array<number>(len * 2);

  for (let k = 0; k < len; k++) {
    res[k] = nums[k];
    res[k + len] = nums[k];
  }

  return res;
};

console.log(getConcatenation([1,2,1]));