'''
조건문 if(분기, 중첩)


x=7
if x==7:
    print"x =",x)

#이중 포문
x=9
if x>0:
    if x<10:
        print("10보다 작은 자연수")

#위에를 and 연산자로 한줄 줄이기
x=9
if x>0 and x<10:
    print("10보다 작은 자연수")

#if~else
x=10
if x>0:
    print("양수")
else:
    print("음수")
'''
x=93
if x>=90:
    print("A")
elif x>=80:
    print("B")
elif x>=70:
    print("C")
elif x>=60:
    print("D")
else:
    print('F')