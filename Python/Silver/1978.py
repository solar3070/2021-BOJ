N = int(input())
lst = list(map(int, input().split()))

cnt = 0
for n in lst:
    prime = True
    for i in range(2, n):
        if (n % i == 0):
            prime = False
            break
    if n != 1 and prime == True:
        cnt += 1
print(cnt)