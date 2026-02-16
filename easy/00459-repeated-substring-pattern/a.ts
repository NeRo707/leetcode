function repeatedSubstringPattern(s: string): boolean {
  // Concatenate the string with itself and remove the first and last characters
  const str = (s + s).slice(1, -1);

  // Check if the original string is a substring of the modified string
  return str.includes(s);
}
