import itertools

n,m = map(int,input().split())
iterable = []
for a in range(n):
    iterable.append(a+1)
result = itertools.permutations(iterable,m)
for permutation in result:
    print(*permutation)

# def perm(lst,n):
# 	ret = []
# 	if n > len(lst): return ret
# 	if n==1:
# 		for i in lst:
# 			ret.append([i])
# 	elif n>1:
# 		for i in range(len(lst)):
# 			temp = [i for i in lst]
# 			temp.remove(lst[i])
# 			for p in perm(temp,n-1):
# 				ret.append([lst[i]]+p)
# 	return ret
#
# n,m = map(int,input().split())
# iterable = []
# for a in range(n):
#     iterable.append(a+1)
# result = perm(iterable,m)
# for i in range(len(result)):
#     print(*result[i])