n = int(input())
dduck = [0,1,2,3]
for i in range(n):
    a,b=map(int,input().split())
    c=dduck[b]
    dduck[b]=dduck[a]
    dduck[a]=c
print(dduck.index(1))