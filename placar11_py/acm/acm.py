from collections import defaultdict

#implementar uma fila
solved = 0
partialtime = 0
totaltime = 0
aux = []
linelog = []
pairs = ()
linelog.append(0)
situations = defaultdict(list)
while int(linelog[0]) != -1:
    linelog = input().split()
    if(int(linelog[0]) != -1):
        pair = (linelog[0], linelog[2])
        situations[linelog[1]].append(pair)
while len(situations) > 0:
    linelog = situations.popitem()
    aux = linelog[1]
    partialtime = 0
    for i in range(0, len(aux)):
        pairs = aux[i]
        if pairs[1] == 'right':
            partialtime = partialtime + int(pairs[0])
            totaltime = totaltime + partialtime
            solved += 1
        else:
            partialtime += 20
print(solved, totaltime)