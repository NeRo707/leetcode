def cnt(arr):
    n = len(arr)
    mx = arr[n-1]
    cnt = 1
    for i in range(n-2, -1, -1):
        if arr[i] >= mx:
            mx = arr[i]
            cnt += 1
    return cnt

n = int(input())
arr = list(map(int, input().split()))
print(cnt(arr))