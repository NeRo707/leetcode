n = int(input())
v = []
x = list(map(int, input().split()))
v.extend(x)
v = sorted(v)
a = v[-1]
ans = 0
for k in v:
    ans = max(ans, a | k)

print(ans)