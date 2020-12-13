import sys
#sys.stdin=open("input.txt", "rt")
n,m=map(int,input().split()) # 여러개의 입력을 받을때는 map을 써야하고 띄어쓰기로 구별할때 split() 써야함
cnt=0
for i in range(1,n+1): #약수는 1부터 구해야 하므로
    if(n%i==0):
        cnt+=1
    if cnt==m:
        print(i)
        break
else: #break없이 정상적으로 끝내면 else문이 실행됨
    print(-1)