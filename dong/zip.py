sstr = input()
tstr = sstr + "0"
count = 0
for i in range(len(tstr) - 1):
    if tstr[i] == tstr[i + 1]:
        count = count + 1
    elif tstr[i] != tstr[i + 1]:
        print(f"{tstr[i]}{count + 1}", end='')
        count = 0
