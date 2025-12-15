class Solution:
    def scoreOfString(self, s: str) -> int:
        asciivalues = []

        for char in s:
            asciivalues.append(ord(char))

        sum = 0
        for l, r in zip(asciivalues, asciivalues[1:]):
            sum += abs(l - r)


        return sum