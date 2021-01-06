n, k = map(int, input().split())
sum = 0
for i in range(1, n + 1):
    sum += pow(i, k)
print(sum % 1000000009)
