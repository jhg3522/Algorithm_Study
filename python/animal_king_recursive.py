def findSurvivor(survivors, stickIndex):
    if len(survivors) == 1:
        return survivors[0]
    else:
        loser = (stickIndex + 1) % len(survivors)
        del survivors[loser]
        stickIndex = loser
        return findSurvivor(survivors, stickIndex)


survivors = list(range(1,101))
solution = findSurvivor(survivors,0)
print("The survivor is %d" %solution)