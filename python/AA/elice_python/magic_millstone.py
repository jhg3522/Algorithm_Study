a = str(input())
b = str(input())
c = len(b) // len(a)
cnt = 0
for i in range(len(a)):
    for j in range(c):
        if a[i] != b[i + len(a) * j]:
            cnt = 1
            break
if cnt == 0:
    print(1)
else:
    print(0)
