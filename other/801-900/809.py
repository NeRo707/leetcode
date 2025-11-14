n = int(input())
cnt = 0

a = 1
b = 0

while (b < 2):
      
    while (a <= n):
    
      if (a % 10 == 7):
        a = a * 10 + 1
      else:
        a = a * 10 + 7
      cnt+=1
      #print(a)
    
    a = 7 
    b+=1
  
print(cnt)