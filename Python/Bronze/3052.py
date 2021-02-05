remainder = []

for i in range(10):
    remainder.append(int(input()) % 42)

print(len(set(remainder)))