tam = input()
stringv = input()
cnt = 0
if tam == 1:
    if stringv[0] == "+":
        cnt += 1
else:
    for i in range(0, len(stringv)):
        print(stringv[i])
        if stringv[i] == "+":
            cnt += 1
        else:
            if cnt > 0:
                cnt -= 1
print(cnt)