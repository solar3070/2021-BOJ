N = int(input("입력: "))
temp = N
cycle = 1

while True:
    sum = temp // 10 + temp % 10
    new = temp % 10 * 10 + sum % 10

    if new == N:
        break

    temp = new
    cycle += 1

print(cycle)