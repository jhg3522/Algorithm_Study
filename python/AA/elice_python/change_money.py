N = int(input())
change= 10000-N
while change>0:
    if change>1000:
        a=change//1000
        change%=1000
    elif change>100:
        b=change//100
        change%=100
    elif change>10:
        c=change//10
        change%=10
    else:
        d=change//1
        change%=1
res = a+b+c+d
print(res)