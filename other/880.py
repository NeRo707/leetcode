import math
r, x = map(float, input().split())
a = 2*r*x + math.pi*r**2
print("{:.4f}".format(a))