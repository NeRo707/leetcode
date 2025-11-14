import time

for _ in range(100):
    start = time.time()

    try:
        a = eval(input())
        
        timer = time.time() - start
        
        time_limit = 1
        
        if timer > time_limit:
            break
        
        if a < 0:
            print(0)
        else:
            print(a)
            
    except EOFError:
        break

