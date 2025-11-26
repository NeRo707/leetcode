/**
 * @param {string} s
 * @return {string}
 */
var reverseVowels = function (s) {
  let n = s.length;
  let vowels = [];

  for (let k = 0; k < n; k++) {
      if (s[k] == 'a' || s[k] == 'e' || s[k] == 'i' || s[k] == 'o' || s[k] == 'u' || s[k] == 'A' || s[k] == 'E' || s[k] == 'I' || s[k] == 'O' || s[k] == 'U') {
          vowels.push(s[k]);
      }
  }

  vowels.reverse();

  let chars = s.split('');

  let x = 0;
  for (let k = 0; k < n; k++) {
      if (s[k] == 'a' || s[k] == 'e' || s[k] == 'i' || s[k] == 'o' || s[k] == 'u' || s[k] == 'A' || s[k] == 'E' || s[k] == 'I' || s[k] == 'O' || s[k] == 'U') {
          chars[k] = vowels[x];
          x++;
      }
  }

  return chars.join('');
};