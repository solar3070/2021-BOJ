T = int(input())

for _ in range(T):
    floor, num, visitor = map(int, input().split())
    cnt = 0
    breaker = False
    for i in range(1, num + 1):
        for j in range(1, floor + 1):
            cnt += 1
            if (cnt == visitor):
                breaker = True
                break
        if (breaker == True):
            break
    print(j * 100 + i)