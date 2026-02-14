

function findTheDifference(s: string, t: string): string {

  const a = s.split('');
  const b = t.split('');

  const mp = new Map<string, number>();

  for (const c of a) {
    const cnt = mp.get(c) ?? 0;
    mp.set(c, cnt + 1);
  };

  for (const c of b) {
    const cnt = mp.get(c) ?? 0;
    mp.set(c, cnt - 1);
  };

  const x = [...mp.entries()].filter(([_, v]) => v == -1).map(([k]) => k).join();


  return x;
};


console.log(findTheDifference("abcd", "abcde")); // Output: "e"
console.log(findTheDifference("", "y")); // Output: "y"
console.log(findTheDifference("a", "aa")); // Output: "a"
console.log(findTheDifference("ae", "aea")); // Output: "a"