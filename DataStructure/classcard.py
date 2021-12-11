import random

word = [['지분', 'equity'], ['전직 해군', 'former marine'], ['갤론', 'gallon'], ['녹', 'rust'],
        ['덩어리', 'clump'], ['특허', 'patent'], ['보관', 'storage'], ['섞다', 'blend'],
        ['창', 'sphere'], ['스크류', 'thread'], ['공기가 새지 않는', 'airtight'], ['마개', 'seal']]

while 1:
    index1 = random.randrange(0, 12)
    index2 = random.randrange(0, 2)
    print(word[index1][index2])
    ans = input()
    if index2 == 0:
        if word[index1][1] == ans:
            print('정답입니다.')
        else:
            print('틀렸습니다.')
            print(word[index1][1])

    elif index2 == 1:
        if word[index1][0] == ans:
            print('정답입니다.')
        else:
            print('틀렸습니다.')
            print(word[index1][0])

    print('종료하기 (0 / 1)')
    value = int(input())
    if value == 1:
        break
