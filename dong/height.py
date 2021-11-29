num = int(input())
height = list()
max = -1
for i in range(num):
	height.append(int(input()))

height.sort()
print(*height)