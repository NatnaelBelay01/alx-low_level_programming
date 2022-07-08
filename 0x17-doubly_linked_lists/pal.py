#!/usr/bin/python3

def pali(n):
    ls = []
    j = -1
    while (n > 0):
        ls.append(n % 10)
        n = n // 10
    for i in ls:
        if (i != ls[j]):
            return False
        j -= 1
    return True
k = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        if pali(i * j) and k < i * j:
            k = i * j
print(k, end="")
