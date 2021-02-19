def insertionSort(list, n):
    for i in range(1, n):
        temp = list[i]
        for j in range(i - 1, -1, -1): 
            if temp < list[j]:
                list[j + 1] = list[j]
                idx = j
            else:
                break
        list[idx] = temp;
        
N = int(input())
lst = [int(input()) for x in range(N)]

insertionSort(lst, N)

for i in lst:
    print(i)