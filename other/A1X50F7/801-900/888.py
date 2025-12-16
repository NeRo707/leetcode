n = int(input())

list = [0, 3.14]

for k in range(2, n):
    list.append(list[k-1] + list[k-2])

print("{:.2f}".format(list[n-1]))
