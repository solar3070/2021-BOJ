X = int(input())
i = 1
sum = 1

while X > sum:
    i += 1
    sum += i

if i % 2 == 1:
    print("%d/%d" %(1 + sum - X, i - sum + X))
else:
    print("%d/%d" %(i - sum + X, 1 + sum - X))