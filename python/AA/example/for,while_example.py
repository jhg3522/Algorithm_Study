'''
반복문을 이요한 문제풀이
1) 1부터 N까지 홀수 출력하기
2) 1부터 N까지의 합 구하기
3) N 의 약수출력하기
'''
'''
1) 1부터 N까지 홀수 출력하기

n=int(input("N을 입력하세요 : "))
for n in range(1,n+1):
    if(n%2!=0):
        print(n)
'''
'''
2) 1부터 N까지 홀수 출력하기

n=int(input("N을 입력하세요 : "))
sum=0
for i in range(1,n+1):
    sum+=i
print(sum)
'''
'''
3) N의 약수 출력하기
'''
n=int(input("N을 입력하세요 : "))
for i in range(1,n+1,1):
    if(n%i==0):
        print(i, end=' ')