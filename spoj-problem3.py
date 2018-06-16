#Working Solution of BERNULLI - Bernoulli numbers in python...
import math
x = int(input()) 
y = int(input())
z = int(input())
def factorial(n):
    if n < 1:
        return 1
    else:
        return n * factorial(n - 1)

def combination(m,k):
    if k <= m:
        return factorial(m)/(factorial(k) * factorial(m - k))
    else:
        return 0

def Bernoulli(m):
    if m == 0:
        return 1
    else:
        t = 0
        for k in range(0, m):
            t += combination(m, k) * Bernoulli(k) / (m - k + 1)
        return 1 - t
print(math.log(abs(Bernoulli(x))))
print(math.log(abs(Bernoulli(y))))
print(math.log(abs(Bernoulli(z))))