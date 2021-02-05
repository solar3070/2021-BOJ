C = int(input())

for i in range(C):
    lst = list(map(int, input().split()))
    avg = (sum(lst[1:])) / lst[0]
    cnt = 0
    for j in range(1, lst[0] + 1):
        if (lst[j] > avg):
            cnt += 1
    print("%.3f%%" %(cnt / lst[0] * 100))