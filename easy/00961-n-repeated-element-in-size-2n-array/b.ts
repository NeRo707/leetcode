const solve = (nums: number[]): number => {

  const st = new Set<number>();

  for (const num of nums) {
    if(st.has(num)) {
      return num;
    }
    st.add(num);
  }

  return -1;
};

console.log(solve([1, 2, 3, 3])); // Output: 3
console.log(solve([2, 1, 2, 5, 3, 2])); // Output: 2