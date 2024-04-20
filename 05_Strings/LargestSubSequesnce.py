
for _ in range(int(input())):
    n = int(input())
    S = input()

    index = []
    maxi = S[-1]
    val = True

    for i, c in enumerate(list(reversed(S))):
        # print("Evaluating:",c)
        if(c >= maxi):
            val &= (c == maxi)
            maxi = c
            index.append(n-i-1)
    index.reverse()
    
    # print(index)

    S1 = ""
    j = 0

    for i in range(n):
        if(j < len(index) and i == index[j]):
            S1 += S[index[-(j+1)]]
            j += 1
        else:
            S1 += S[i]

    # print(S1, "".join(sorted(S)))


    if(S1 ==  "".join(sorted(S)) and not val): 
        print(len(index)-1)
    elif(S1 ==  "".join(sorted(S)) and val):
        print("0")
    else:
        print(-1)
