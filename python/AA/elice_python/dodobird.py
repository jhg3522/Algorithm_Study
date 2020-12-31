b_length = int(input())
b= [int(i) for i in input().split()]
a = [0] * b_length # b리스트와 같은 크기의 a리스트 생성
a[0] = b[0]
for i in range(1,b_length):
    a[i] = b[i]*(i+1)-b[i-1]*i  #i는 1부터 시작하므로 +1하여서 총 일에서 전날의 총 일을 뺌
for i in a:
    print(i, end=' ')   #줄바꿈 없이 띄어쓰기로 출력