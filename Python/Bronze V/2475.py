data = list(map(int, input().split()))

data = [i ** 2 for i in data]

n = sum(data) % 10
print(n)