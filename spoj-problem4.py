#CIRCLE_E - SPOJ
#Close but no cigar.
k = int(input())
for i in range(k):
	T = list(map(int,input().split()))
	a = T[0]
	b = T[1]
	c = T[2]
	d = (a*b*c)
	e = a*b + b*c + c*a
	f = 2*((a*b*c)*(a+b+c))**(1/2)
	y = []
	h = d/(e+f)
	L = []
	L.append(h)
	print(L)
#print(L[1])	#for i in range(len(T)):
	


