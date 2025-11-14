import math

def sacery(l, r):
    prime = [True for i in range(r + 2)]
    prime[0] = False
    prime[1] = False

    for p in range(2, int(math.sqrt(r))+1):
        if prime[p] == True:
            for i in range(p*p, r+1, p):
                prime[i] = False

    for p in range(l, r+1):
        if prime[p]:
            print(p, end=" ")

l, r = map(int, input().split())

sacery(l, r)
