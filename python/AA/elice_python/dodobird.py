b_length = int(input())
b= [int(i) for i in input().split()]
a = [0] * b_length
a[0] = b[0]
for i in range(1,b_length):
    a[i] = b[i]*(i+1)-b[i-1]*i
for i in a:
    print(i, end=' ')