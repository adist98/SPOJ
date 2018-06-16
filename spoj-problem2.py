T = list(map(int,input().split()))
K = T[1]
A = list(map(int,input().split()))
count = 0

for i in range(0,len(A)):
	for j in range(1,len(A)):
		if A[j]-A[i] == K:
			count = count+1
print(count)		