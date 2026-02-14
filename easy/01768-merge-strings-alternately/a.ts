

function mergeAlternately(word1: string, word2: string): string {
  
  const w1 = word1.split('');
  const w2 = word2.split('');
  const a: string[] = [];

  let l = 0;
  let r = 0;

  const maxLength = word1.length + word2.length;

  while (a.length < maxLength) {
    if (l < w1.length) {
      a.push(w1[l]);
      l++;
    }
    if (r < w2.length) {
      a.push(w2[r]);
      r++;
    }
  }

  return a.join('');
};

console.log(mergeAlternately("dfe", "beebda")); // Output: "dbeefebda"
console.log(mergeAlternately("ab", "pqrs")); // Output: "apbqrs"
console.log(mergeAlternately("abcd", "pq")); // Output: "apbqcd"
