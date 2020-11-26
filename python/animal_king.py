# while문으로 작성시
# 1) 1~100까지 리스트 만들기
survivors = list(range(1,101))
# 2) 0번째 index에 stick을 주기
stickIndex=0
# 3) while loop를 진행, index가 리스트의 길이를 넘지 안혿록 % len(survivors)를 추가
while len(survivors) > 1 :
    loser = (stickIndex + 1) % len(survivors)
    del survivors[loser]
    stickIndex = loser
# 4) 답안 출력
print("The Survivor is %d" %survivors[0])