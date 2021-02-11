T = int(input())

for _ in range(T):
    n = int(input())

    nums = {x for x in range(2, n) if x == 2 or x % 2 == 1}

    for i in range(3, int(n ** (0.5)), 2):
        nums -= {x for x in range(i * 2, n, i) if x in nums}
    nums = list(nums)

    half = n // 2
    for i in range(half, 1, -1):
        if n - i in nums and i in nums:
            print(i, n - i)
            break