T = int(input())

for i in range(T):
    R, S = input().split()
    P = str()
    for j in range(len(S)):
        P += S[j] * int(R)
    print(P)