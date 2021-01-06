n = int(input())
if 100 < n < 1000:
    if n % 100 == 10:
        A = n // 100
        B = 10
    else:
        A = (n // 100) * 10
        B = n % 100
elif n<100:
    A= n//10
    B= n%10
else:
    A=10
    B=10
print(A+B)