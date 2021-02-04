N = int(input())
cnt = N

if N >= 100:
    for i in range(100, N + 1):
        n = str(i)
        gap = int(n[1]) - int(n[0])
        for j in range(1, len(n) - 1):
            if gap != int(n[j + 1]) - int(n[j]):
                cnt -= 1
                break

print(cnt)
    