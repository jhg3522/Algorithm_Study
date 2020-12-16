'''
리스트와 내장함수 (1)
'''
import random as r #random을 r로 명명하겠다
a=[1,2,3,4,5]
#print(a[0])

b=list(range(1,11))
#print(b)

c=a+b
#print(c)

print(a)
a.append(6) #a list에 마지막에 6추가
print(a)

a.insert(3,7) #a list에 3번 index에 7을 추가
print(a)

a.pop() # 마지막 원소를 제거
print(a)
a.pop(3) #3번 index에 값을 제거
print(a)

a.remove(4) # a list에서 4라는 값을 찾아서 제거
print(a)

print(a.index(5)) # a list에서 5를 찾아서 index를 리턴함

a = list(range(1,11))
print(a)
print(sum(a)) # a list에 있는 값을 모두 더한 값
print(max(a)) # a list에 있는 값 중에 가장 큰 값
print(min(a)) # a list에 있는 값 중에 가장 작은 값
print(min(a[3:7]))
r.shuffle(a)
print(a)
a.sort()
print(a)
a.sort(reverse=True)
print(a)
a.clear()
print(a)