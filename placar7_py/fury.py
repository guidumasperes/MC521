n = int(input())
array = []
groups = []
for i in range(0,n):
    lines = int(input())
    for j in range(0, lines):
        n_line = input()
        array.append(n_line)
    for k in range(0, n):
        test = array[k].split()
        for l in range(k, n):
            test1 = array[l].split()
            if(int(test1[0]) == int(test[0])):
                ##se as linhas forem iguais coloca no mesmo grupo
            if(int(test1[1]) == int(test[1])):
                ##se as colunas forem iguais coloca no mesmo grupo