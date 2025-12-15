def solve(s: str) -> int:
    total = 0
    prev = ord(s[0])

    for c in s[1:]:
        cur = ord(c)
        total += abs(cur - prev)
        prev = cur

    return total




print(solve("code"))  # Output: [1, 2, 3]