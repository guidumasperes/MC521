user_input = input()
n = int(user_input)
alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
for i in range(0, n):
    string = input()
    string1 = list(string)
    string1.sort()
    flag = 0
    tam = len(string1)
    for j in range(0, tam):
        for k in range(0, 26):
            if string1[j] == alphabet[k]:
                o = j
                m = k
                cnt = 0
                while m < 26 and o < tam and string1[o] == alphabet[m]:
                    cnt = cnt + 1
                    o = o + 1
                    m = m + 1
                if cnt == tam:
                    print("Yes")
                else:
                    print("No")
                flag = 1
            if flag == 1:
                break
        if flag == 1:
            break