for _ in range(int(input())):
    v = list(map(int, input().split()))
    if((v[0]+v[1]+v[2]) % 2 == 1):
        print(-1)
    else:
        count = 0
        while(v[1] != 0):
            v[2]-=1
            v[1]-=1
            v.sort()
            count += 1
        print(count)
