def solve(x1, y1, x2, y2, x3, y3):
    return 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))

x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())
x3, y3 = map(int, input().split())
area = solve(x1, y1, x2, y2, x3, y3)
print(f"{area:.5f}")
