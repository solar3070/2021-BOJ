normal = [1, 1, 2, 2, 2, 8]
piece = list(map(int, input().split()))

for i in range(0, 6):
    print(normal[i] - piece[i], end = ' ')