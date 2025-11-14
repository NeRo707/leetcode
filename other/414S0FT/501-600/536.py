a = "abcdefghijklmnopqrstuvwxyz"
str = input()
t = 0;
for i in a:
  if i not in str:
    print(i, end=" ")
  else:
    t += 1
    
if t == 26: print("Complete")