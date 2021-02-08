M, N = map(int, input().split())
isPrime = [True] * (N + 1)
isPrime[0], isPrime[1] = False, False

for i in range(2, N + 1):
    if isPrime[i]:
        for j in range(i * 2, N + 1, i):
            isPrime[j] = False

for i in range(M, N + 1):
    if isPrime[i]:
        print(i)
