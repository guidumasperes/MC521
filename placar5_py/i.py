n = int(input())
for i in range(0, n):
    cnt = 0
    str = input()
    str = str.split(' ')
    str1 = str[0]
    str2 = str[1]
    alf = [0] * 26
    for j in range(len(str2)):
        alf[ord(str2[j]) - 97] += 1

    for j in range(len(str1)):
        if (alf[ord(str1[j]) - 97] == 0):
            break
        else:
            alf[ord(str1[j]) - 97] -= 1;
            cnt += 1
    print(cnt)