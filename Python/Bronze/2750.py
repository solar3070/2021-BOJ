def bubbleSort(list, n):
    for i in range(n - 1):
        for j in range(n - 1 - i):
            if list[j] > list[j + 1]:
                list[j], list[j + 1] = list[j + 1], list[j]

N = int(input())
lst = [int(input()) for x in range(N)]

bubbleSort(lst, N)

for i in lst:
    print(i)