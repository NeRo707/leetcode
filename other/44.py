n = int(input())
d = [0] * (n + 1)
d[0] = 1

for k in range(1, n + 1):
    for l in range(n, k - 1, -1):
        d[l] += d[l - k]

print(d[n])
