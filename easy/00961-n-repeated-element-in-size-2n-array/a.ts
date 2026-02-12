const solve = (nums: number[]) => {

  const mp = new Map<number, number>();

  for (let k = 0; k < nums.length; k++){
    const num = nums[k];
    let cnt: number = mp.get(num) || 0;

    mp.set(num, cnt += 1);
  }

  const entries = mp.entries();

  for (const [key, value] of entries) {
    if (value > 1) {
      return key;
    }
  }
  return -1;
};

console.log(solve([1, 2, 3, 3])); // Output: 3
console.log(solve([2, 1, 2, 5, 3, 2])); // Output: 2

export { };