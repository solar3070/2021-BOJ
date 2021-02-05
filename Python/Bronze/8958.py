T = int(input())

for i in range(T):
    Q = input()
    cnt = 0
    score = 0
    for j in Q:
        if (j == 'O'):
            cnt += 1
            score += cnt
        else:
            cnt = 0
    print(score)