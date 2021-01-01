a=10
b=40
c=250
a_cnt=0
b_cnt=0
c_cnt=0
bar = int(input())
while(bar>=c):
    bar -= c
    c_cnt+=1
while(bar>=b):
    bar -= b
    b_cnt += 1
while(bar>=a):
    bar -= a
    a_cnt += 1
if(bar==0):
    print(a_cnt , b_cnt , c_cnt)
else:
    print(-1)