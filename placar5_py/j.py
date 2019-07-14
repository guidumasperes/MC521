n = int(input())
ent = input()
ent = ent.split(' ')
ent = list(map(int, ent))
if(sum(ent) >= n):
    print('NO')
else:
    print('YES')
    ultimo = len(ent) - 1
    i = ultimo
    while(ent[0] > 0):
        if(ent[i] > ent[ultimo]):
            print(i+1, ' ', ultimo+1)
            ent[ultimo] -= 1
            ultimo -= 1
            ent[i] -= 1
            i += 1
        i -= 1