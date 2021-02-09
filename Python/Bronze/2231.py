N = int(input())

min = N - len(str(N)) * 9
if  len(str(min)) != len(str(min)):
    min += 9

while 0 < min < N:
    m = list(map(int, str(min)))

    if min + sum(m) == N: break

    min += 1

if min < 0 or min >= N:
    print(0)
else:
    print(min)