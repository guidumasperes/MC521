def binary(item, alist):
    first = 0
    last = len(alist)-1
    found = False
    while first<=last and not found:
        midpoint = (first + last)//2
        if alist[midpoint] == item:
            return midpoint

        else:
            if item < alist[midpoint]:
                last = midpoint-1
            else:
                first = midpoint+1
    return -1


n = input()
n = n.split(' ')
q = int(n[1])
n = int(n[0])
ent = input()
ent = ent.split(' ')
ent = list(map(int, ent))
for i in range(0,q):
    x = int(input())
    i = binary(x,ent)
    while(i> 0 and ent[i-1] == ent[i]):
        i = i-1
    print(i)