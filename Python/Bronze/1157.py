str = list(input().upper())
set_str = list(set(str))
cnt = []

for i in range(len(set_str)):
    cnt.append(str.count(set_str[i]))

if cnt.count(max(cnt)) > 1:
    print("?")
else:
    print(set_str[cnt.index(max(cnt))])