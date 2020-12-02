'''
변수명 정하기
1) 영문과 숫자, _로 이루어진다.
2) 대소문자를 구분한다.
3) 문자나, _로 시작한다.
4) 특수문자를 사용하면 안된다.(&,% 등)
5) 키워드를 사용하면 안된다. (if, for 등)
'''
a=1
A=2
A1=3
_b=4
print(a,A,A1,_b)
# 한줄 주석석

#값 교환
a, b= 10, 20
print (a,b)
a, b=b, a
print (a,b)

#변수타입
a=12345
print(a)
a=1.123456789123456789 #실수형은 8바이트까지만 담을 수 있다. 8바이트 이상이면 메모리 손실
print(a)
print(type(a))
a='student'
print(a)
print(type(a))

#출력방식
print("number")
a,b,c=1,2,3
print(a,b,c)
print("number :",a,b,c)
print(a,b,c, sep=',')
print(a,end=' ')
print(b)