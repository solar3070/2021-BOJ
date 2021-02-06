import sys

N = int(input())
list = []

for i in range(N):
    word = sys.stdin.readline().rstrip()
    list.append(word)

false = 0

for w in list:
    alpha = []
    for i in range(len(w)):
        if w[i] not in alpha:
            alpha.append(w[i])
        elif w[i - 1] != w[i]:
            false += 1
            break
        
print(N - false)
