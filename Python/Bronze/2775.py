t = int(input())

for _ in range(t):
    floor = int(input()) #층
    num = int(input()) #호
    f0 = [x for x in range(1, num + 1)]
    for k in range(floor):
        for i in range(1, num):
            f0[i] += f0[i - 1]
    print(f0[-1])

