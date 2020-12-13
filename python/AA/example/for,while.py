'''
반복문(for, while)


a=range(10) # range함수는 0~9까지의 리스트
print(list(a))
print(a)

#for문
for i in range(10):
    print(i)

for i in range(10,0): #이렇게하면 10,9,8 순으로 줄어드는게아님
    print(i)          #아무일도 일어나지않음

for i in range(10,0,-1): #(처음,끝,간격)
    print(i)

#while문
i=1
while i<10:
    print(i)
    i+=1

i=1
while True:     #무한루프
    print(i)
    if i==10:
        break
    i += 1

#짝수 출력
for i in range(1,11):
    if i%2!=0:      #홀수의미
        continue
    print(i)
'''
#for~else 구문
dir="left"
if dir == "left":
    dir = "right"
print(dir)
