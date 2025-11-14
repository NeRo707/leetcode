def rev(array, a, b, c, d):
    a -= 1
    b -= 1
    c -= 1
    d -= 1

    array[a:b+1] = array[a:b+1][::-1]
    array[c:d+1] = array[c:d+1][::-1]

    return array

n = int(input().strip())
array = list(map(int, input().strip().split()))
a, b = map(int, input().split())
c, d = map(int, input().split())
result = rev(array, a, b, c, d)

print(' '.join(map(str, result)))
