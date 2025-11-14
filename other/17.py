n = int(input())

while True:
    n += 1
    number = str(n)
    digits = set(number)
    if len(digits) == len(number):
        print(n)
        break
