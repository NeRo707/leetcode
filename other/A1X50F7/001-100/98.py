n = int(input())
a = list(map(int, input().split()))
a.sort()

mxdiff = 0
for i in range(n - 1):
    diff = a[i + 1] - a[i]
    
    if diff > mxdiff:
        mxdiff = diff

print(mxdiff)