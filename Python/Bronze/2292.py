N = int(input())
i = 1
cut = 2

while N >= cut:
    cut += 6 * i    
    i += 1

print(i)