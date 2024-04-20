
for i in range(int(input())):
    x, y = map(int, input().split())
    dif = y - x
    if(y - x == 1):
        print(-1)
    else:
        val = 10000000 
        for i in range(2, dif + 1):
            if(x % i == y % i):
                # if(x % i == 0) val = 0 
                val = min(val, i - (x % i))
            if(y % x == 0):
                val = 0
        print(val)
