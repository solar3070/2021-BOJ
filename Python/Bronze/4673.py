selfNumber = []

for i in range(1, 10001):
    num = str(i)
    sum = i
    for j in num:
        sum += int(j)
    selfNumber.append(sum)

for i in range(1, 10001):
    if i not in selfNumber:
        print(i)
