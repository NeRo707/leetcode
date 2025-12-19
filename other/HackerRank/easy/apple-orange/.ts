function countApplesAndOranges(s: number, t: number, a: number, b: number, apples: number[], oranges: number[]): void {
  
  let aCnt = 0;
  let oCnt = 0;

  for (let i = 0; i < apples.length; i++) {
    const pos = a + apples[i];
    if (pos >= s && pos <= t) {
      aCnt++;
    }
  }
  for (let i = 0; i < oranges.length; i++) {
    const pos = b + oranges[i];
    if (pos >= s && pos <= t) {
      oCnt++;
    }
  }

  console.log(aCnt);
  console.log(oCnt);
}

console.log(countApplesAndOranges(7, 11, 5, 15, [-2, 2, 1], [5, -6]));