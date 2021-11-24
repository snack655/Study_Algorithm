stack = []
num = int(input())
for i in range(num):
	inNum = list(map(int, input().split()))
	for v in range(len(inNum)):
		stack.append(inNum[v])
	outNum = int(input())
	for j in range(outNum):
		stack.pop()

print(str(stack)[1:-1])