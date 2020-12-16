'''
리스트와 내장함수(2)
'''
a=[23,12,36,53,19]
print(a[:3])
print(a[1:4])
print(len(a))

for i in range(len(a)):
    print(a[i],end=' ')
print()

for x in a:
    print(x, end=' ')
print()

for x in a:
    if x%2==1:
        print(x, end=' ')
print()

for x in enumerate(a): #tuple 형태 (index,value)
    print(x)

b=(1,2,3,4,5)
# b[0]=7 튜플의 값은 절대 변경 불가능 / list는 가능

for x in enumerate(a):
    print(x[0],x[1])

for index, value in enumerate(a):
    print(index,value)
#위의 두개는 같은 것.

if all(60>x for x in a): # x라는 값은 a의 리스틑하나씩 for문을 돌면서 앞에 조건을 검사함
    #all은 for문을 돌면서 전체가 다 참이여야만 참을 리턴함
    print("Yes")
else:
    print("No")

if any(15>x for x in a): # x라는 값은 a의 리스틑하나씩 for문을 돌면서 앞에 조건을 검사함
    #any는 for문중 하나라도 참이면 참
    print("Yes")
else:
    print("No")
#all은 and any는 or느낌쓰