p = [1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
s = input()

for k, c in enumerate(s):
    c = ord(s[k]) - p[k]
    if c < ord('a'):
        c += 26
    print(chr(c), end="")
