n, k = map(int, input().split())
count = 0
while(1):
    if n >= k:
        if n % k != 0:
            n = n - 1
            count = count + 1
        elif n % k == 0:
            n = n / k
            count = count + 1
    elif n < k:
        while(1):
            if n == 1:
                count = count + 1
                break
            n = n - 1
            count = count + 1
        break

print(count)