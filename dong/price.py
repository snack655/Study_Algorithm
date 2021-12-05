price = int(input())
ans1 = price * (1 - (22/100))
ans2_1 = price * (80 / 100)
ans2_2 = ((price - ans2_1) - ((price - ans2_1) * (22 / 100)))
ans2 = ans2_1 + ans2_2
print(int(ans1))
print(int(ans2))