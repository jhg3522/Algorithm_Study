import itertools

n,m = map(int,input().split())
iterable = []
for a in range(n):
    iterable.append(a+1)
result = itertools.permutations(iterable,m)
for permutation in result:
    print(*permutation)

