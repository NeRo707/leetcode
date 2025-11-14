def solve(n):
    if n < 2 or n > 12:
        return 0.0

    cnt = 0
    for i in range(1, 7):
        for j in range(1, 7):
            if i + j == n:
                cnt += 1

    return round(cnt / 36.0, 7)


n = int(input())
print(solve(n))
