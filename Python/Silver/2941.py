cro = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
word = input()
tmp = word
cnt = 0
cro_len = 0

for i in cro:
    if tmp.find(i) != -1:
        cnt += tmp.count(i)
        cro_len += len(i) * tmp.count(i)
        tmp = tmp.replace(i, " ")

print(cnt + len(word) - cro_len)