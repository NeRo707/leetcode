function sumFourDivisors(nums: number[]): number {
  let total = 0;
  for (const num of nums) {
    let cnt = 0;
    let sum = 0;
    // Only check up to √num
    for (let k = 1; k * k <= num; k++) {
      if (num % k === 0) {
        cnt++;
        sum += k;
        // Add the paired divisor if it's different
        if (k !== num / k) {
          cnt++;
          sum += num / k;
        }
      }
      if (cnt > 4) break;
    }
    if (cnt === 4) total += sum;
  }
  return total;
}

console.log(sumFourDivisors([21, 4, 7, 64])); // Output: 32
console.log(sumFourDivisors([1, 2, 3, 4, 5, 6])); // Output: 12
console.log(sumFourDivisors([21, 21])); // Output: 64
