n = int(input())
arr = list(map(int, input().split()))
cnt = 0
t = 0
for k in arr:
    if k % 2 == 1:
        cnt+=k
        t+=1
        
print(t, cnt) if t else print(-1)
