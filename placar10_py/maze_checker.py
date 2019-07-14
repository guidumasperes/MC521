from collections import defaultdict

tests = input()
for i in range(0, int(tests)):
    rows_colums = input().split()
    r, c = int(rows_colums[0]), int(rows_colums[1])
    matrix = []
    for x in range(0, r):
        matrix.append(list(input()))
    graph = defaultdict(list)
    cnt = 0
    name2 = []
    name22 = []
    flag = 0
    ## aqui ja pode montar o grafo e verificar as extremidades
    for x in range(0, r):
        for y in range(0, c):
            name1 = []
            name12 = []
            if matrix[x][y] == '.':
                if x == 0 or x == r-1 or y == 0 or y == c-1:
                    cnt+=1
                    if cnt > 2:
                        flag = 1
                        break
                name1.append(str(x))
                name1.append(str(y))
                name12 = ''.join(name1)
                print("x ", x)
                print("y ", y)
                print("matrix ", matrix[x][y])
                if x > 0 and matrix[x-1][y] == '.':
                    name2.append(str(x-1))
                    name2.append(str(y))
                    name22 = ''.join(name2)
                    graph[name12].append(name22)
                    name2 = []
                    name22 = []
                if x < r-1 and matrix[x+1][y] == '.':
                    name2.append(str(x+1))
                    name2.append(str(y))
                    name22 = ''.join(name2)
                    graph[name12].append(name22)
                    name2 = []
                    name22 = []
                if y > 0 and matrix[x][y-1] == '.':
                    name2.append(str(x))
                    name2.append(str(y-1))
                    name22 = ''.join(name2)
                    graph[name12].append(name22)
                    name2 = []
                    name22 = []
                if y < c-1 and matrix[x][y+1] == '.':
                    name2.append(str(x))
                    name2.append(str(y+1))
                    name22 = ''.join(name2)
                    graph[name12].append(name22)
                    name2 = []
                    name22 = []
        if flag == 1:
            break
    ##agora tem que rodar o dfs
    if flag == 1:
        print("invalid")
    else:
        print("valid")
        flag = 0