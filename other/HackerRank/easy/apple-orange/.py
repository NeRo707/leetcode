def countApplesAndOranges(s, t, a, b, apples, oranges):
    acnt = sum(1 for d in apples if s <= a + d <= t)
    ocnt = sum(1 for d in oranges if s <= b + d <= t)
    print(acnt)
    print(ocnt)
  
  
  
  
print(countApplesAndOranges(7, 11, 5, 15, [-2, 3, 2, 1], [5, -6]))