function kangaroo(x1: number, v1: number, x2: number, v2: number): string {
  
  const xdiff = x2 - x1;
  const vdiff = v1 - v2;

  const res = vdiff <= 0 ? "NO" : (xdiff % vdiff == 0 ? "YES" : "NO");

  return res;
}

console.log(kangaroo(0, 3, 4, 2));