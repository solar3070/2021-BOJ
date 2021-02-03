import sys

T = int(input())

for i in range(1, T + 1):
    A, B = map(int, sys.stdin.readline().split())
    #print("Case #" + str(i) + ": " + str(A + B))
    #print("Case #%d: %d" %(i, A + B))
    print("Case #{0}: {1}".format(i, A + B))