N = int(input())
sum=0
for i in range(N):
    a = int(input())
    sum+=a
ans= sum/10**31
print(int(ans))