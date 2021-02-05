str = input()
dial = {2:['A', 'B', 'C'], 3:['D', 'E', 'F'], 4:['G', 'H', 'I'], 5:['J', 'K', 'L'], 6:['M', 'N', 'O'], 7:['P', 'Q', 'R', 'S'], 8:['T', 'U', 'V'], 9:['W', 'X', 'Y', 'Z']}
tel = []

for i in range(len(str)):
    for key, value in dial.items():
        if str[i] in value:
            tel.append(key + 1)

print(sum(tel))