import math

while True:
    a = int(input())

    if a == 0: break

    b = 2 * a
    nums = {x for x in range(a + 1, b + 1) if x == 2 or x % 2 == 1}

    for odd_num in range(3, int(math.sqrt(b)) + 1, 2):
        nums -= {i for i in range(odd_num * 2, b + 1, odd_num) if i in nums}

    print(len(nums))