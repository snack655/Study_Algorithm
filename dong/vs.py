num = int(input())
count = [0, 0]
for i in range(num):
    a, b = map(int, input().split())
    if a > b:
        count[0] = count[0] + 1
    elif b > a:
        count[1] = count[1] + 1
print(count[0], count[1])
