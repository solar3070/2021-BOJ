S = input()
lst = [-1] * 26

for i in range(len(S)):
    loc = ord(S[i]) - 97
    if lst[loc] == -1:
        lst[loc] = i

for i in lst:
    print(i, end = " ")