# worst case
lis = [2,7,11,15]
target = 9

for a in range(0,len(lis)):
    x = target - lis[a]

    for b in range(a, len(lis)):
        if x == lis[b]:
            print (a, b)
        