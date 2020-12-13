'''
문자열과 내장함수
'''
msg = "It is Time"
print(msg.upper()) #upper() 문자열을 대문자로 바꿔주는 내장함수
print(msg.lower()) #upper() 문자열을 소문자로 바꿔주는 내장함수
print(msg) #하지만 원분 문자열을 바꾸는 것은 아니다.
tmp = msg.upper()
print(tmp)
print(tmp.find('T')) #'T'의 첫번째 인덱스 번호를 찾아줌.
print(tmp.count('T')) #'T'의 문자열 개수 counting
print(msg[:2]) #0~2까지를 출력함 slice 기능
print(msg[3:5])
print(len(msg)) #msg의 길이를 구하는 함수 공백포함
for i in range(len(msg)):
    print(msg[i],end="")
print()
for x in msg:
    print(x,end='')
print()
'''
문자열 중에서 대문자만 출력하는 함수

for x in msg:
    if x.isupper(): #x가 대문자이면 True
        print(x, end=' ')
'''
'''
문자열에서 알파벳만 뽑아내는 함수

for x in msg:
    if x.isalpha(): #문자열에서 알파벳이면 True
        print(x, end='')
print()
'''
'''
문자열의 아스키 넘버를 알려주는 함수

tmp='AZ'
for x in tmp:
    print(ord(x))
'''
tmp =65
print(chr(tmp)) #아스키 넘버에 대응하는 문자를 출력해주는 함수