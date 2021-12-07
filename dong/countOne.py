def count_one(num):
    count = 0
    num = str(num)
    for i in range(len(num)):
        if num[i] == '1':
            count = count + 1

    return count


numin = int(input())
number = bin(numin)
one_cnt = count_one(number)

while 1:
    test_cnt = 0
    numin = numin + 1
    test_cnt = count_one(bin(numin))
    if one_cnt == test_cnt:
        print(numin)
        break
