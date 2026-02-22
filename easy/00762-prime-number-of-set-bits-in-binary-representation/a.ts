function bits(n: number): number {
  return Number(n.toString(2).replaceAll("0", "").length);
}

function isPrime(n: number): boolean {
  if (n <= 1) {
    return false;
  }
  for (let k = 2; k * k <= n; k++) {
    if (n % k === 0) {
      return false;
    }
  }
  return true;
}

function countPrimeSetBits(left: number, right: number): number {
  let cnt = 0;

  for (left; left <= right; left++) {
    const b = bits(left);
    if (isPrime(b)) {
      cnt++;
    }
  }

  return cnt;
}
