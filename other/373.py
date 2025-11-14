n = int(input())

arr = list(map(int, input().split()))

for i in range(n):
    if i != arr[i]:
        print(i)
        break

if i == n-1:
    print(n)
