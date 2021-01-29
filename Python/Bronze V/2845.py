L, P = map(int, input().split())
people = list(map(int, input().split()))

gap = [i-L*P for i in people]

for i in people:
    print(i-L*P, end=' ')