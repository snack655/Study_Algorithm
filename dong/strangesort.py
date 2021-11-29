num = list(map(int, input().split()))
renum = list()

# 음수 거르기
for i in range(len(num)):
    if num[i] < 0:
        renum.append(num[i])

# 양수 거르기
for i in range(len(num)):
    if num[i] > 0:
        renum.append(num[i])

print(*renum, sep=' ')