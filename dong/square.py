num = int(input())
test = 1
array = [[0] * num for row in range(num)]
for i in range(0, num):
    for j in range(0, num):
        array[i][j] = test
        test = test + 1

print(array[0][0] + array[0][num - 1] + array[-1][0] + array[-1][num - 1])
