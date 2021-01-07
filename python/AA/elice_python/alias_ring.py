N = int(input())
a = ''
for i in range(1, N + 1):
    a += str(i)
print(a.find(str(N))+1)
