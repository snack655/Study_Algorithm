# 소수 판별하기

num = int(input())

if num <= 1:
    print('False')
else:
    for i in range(2, int(num ** 0.5) + 1):
        if not num % i:
            print('False')
            exit(0)
        print('True')