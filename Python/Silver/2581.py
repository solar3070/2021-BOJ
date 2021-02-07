M = int(input())
N = int(input())

prime = []
for n in range(M, N + 1):
    is_prime = True
    for i in range(2, n):
        if (n % i == 0):
            is_prime = False
            break
    if n != 1 and is_prime == True:
        prime.append(n)

if not prime:
    print(-1)
else:
    print(sum(prime))
    print(min(prime))