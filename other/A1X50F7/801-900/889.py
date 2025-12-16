import math

a, b = map(int, input().split())

x = (a*a) + (b*b)
y = (a*a) - (b*b)
z = (b*b) - (a*a)

if x > 0 and round(math.sqrt(x)) == math.sqrt(x):
    print(int(math.sqrt(x)))
if y > 0 and round(math.sqrt(y)) == math.sqrt(y):
    print(int(math.sqrt(y)))
if z > 0 and round(math.sqrt(z)) == math.sqrt(z):
    print(int(math.sqrt(z)))
