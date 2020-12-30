N, T = map(int, input().split())
time = [int(i) for i in input().split()]
cnt=0
for i in range(len(time)):
    if(T-time[i]>0):
        T-=time[i]
        cnt+=1
    else:
        break
print(cnt)