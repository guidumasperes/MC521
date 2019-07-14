n = input()
arr_input = input()
arr = arr_input.split()
cnt = 0
tam = len(arr)
seq = []
if int(arr[0]) <= int(arr[tam-1]):
    seq.append("L")
    cnt += 1
    last = int(arr[0])
    arr.pop(0)
    tam -= 1
else:
    seq.append("R")
    cnt += 1
    last = int(arr[tam-1])
    arr.pop(tam-1)
    tam -= 1
while tam > 0 and (int(arr[0]) > last or int(arr[tam-1]) > last):
    if int(arr[0]) < last:
        seq.append("R")
        cnt += 1
        last = int(arr[tam-1])
        arr.pop(tam-1)
        tam -= 1
    elif int(arr[tam-1]) < last:
        seq.append("L")
        cnt += 1
        last = int(arr[0])
        arr.pop(0)
        tam -= 1
    else:
        if int(arr[0]) < int(arr[tam-1]):
            seq.append("L")
            cnt += 1
            last = int(arr[0])
            arr.pop(0)
            tam -= 1
        elif int(arr[0]) > int(arr[tam-1]):
            seq.append("R")
            cnt += 1
            last = int(arr[tam - 1])
            arr.pop(tam - 1)
            tam -= 1
        else:
            seq.append("L")
            cnt += 1
            last = int(arr[0])
            arr.pop(0)
            tam -= 1
print(cnt)
seq_final = ''.join(seq)
print(seq_final)