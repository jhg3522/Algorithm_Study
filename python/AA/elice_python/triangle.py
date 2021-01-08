while True:
    data = list(map(int, input().split()))
    if data[0] == 0:
        break
    data.sort(reverse=True)
    if data[0] ** 2 == data[1] ** 2 + data[2] ** 2:
        print("rightangle")
    else:
        print("triangle")

