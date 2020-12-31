N, T = map(int, input().split()) #띄어쓰기로 N,T 입력
time = [int(i) for i in input().split()] #time 리스트에 시간 입력
cnt=0 #결과를 위해서 cnt 생성
for i in range(len(time)): #time 길이동안 for문
    if(T-time[i]>0): #총 시간에서 각각의 시간을 뺀것이 음수가 되나 확인
        T-=time[i]
        cnt+=1
    else:
        break
print(cnt) #결과