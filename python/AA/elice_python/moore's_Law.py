N = int(input())
ans = 2 ** N
sums = 0
while ans > 0:
    sums += (ans % 10)
    ans //= 10
print(sums)
