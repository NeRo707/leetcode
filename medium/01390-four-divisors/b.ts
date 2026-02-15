function solution(nums: number[]): number {
  let total = 0;
  
  for (const n of nums) {
    total += getDivisorSum(n);
  }
  
  return total;
}

function getDivisorSum(n: number): number {
  // Check if n is a perfect cube with prime cube root
  const cubeRoot = Math.round(Math.cbrt(n));
  if (cubeRoot ** 3 === n && isPrime(cubeRoot)) {
    const p = cubeRoot;
    return 1 + p + p**2 + p**3;
  }
  
  // Try to find two distinct prime factors p × q = n
  for (let p = 2; p <= Math.sqrt(n); p++) {
    if (n % p === 0) {
      const q = n / p;
      if (p !== q && isPrime(p) && isPrime(q)) {
        return 1 + p + q + n;
      }
    }
  }
  
  return 0;
}

function isPrime(num: number): boolean {
  if (num < 2) return false;
  if (num === 2) return true;
  if (num % 2 === 0) return false;
  
  for (let i = 3; i <= Math.sqrt(num); i += 2) {
    if (num % i === 0) return false;
  }
  
  return true;
}